----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:34:11 05/13/2016 
-- Design Name: 
-- Module Name:    ADC_control - adcca 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity ADC_control is
	generic(
		Ncycles_strobe : integer := 2;
		Nbit_data : integer := 30
		);
    Port ( rst : in  STD_LOGIC;
           sck_internal : in  STD_LOGIC;
			  start_conv : in std_logic;
           SCK_enable : out  STD_LOGIC;
           MISO : in  STD_LOGIC;
           AD_CONV : out  STD_LOGIC;
			  ADC_Dataout : out std_logic_vector(2*Nbit_data-1 downto 0)
			  );
end ADC_control;

architecture adcca of ADC_control is
	constant Ncycles_wait : integer := 3;
	constant Ncycles_break : integer := 2;
	type stany is (IDLE, START_CONVERSION, WAIT_FOR_SAMPLE, CONV_CH1, CHANNEL_BRK, CONV_CH0);
	signal state : stany := IDLE;
	shared variable data1, data0 : std_logic_vector(Nbit_data-1 downto 0);
begin
	adc: process(sck_internal, rst) is
	
	variable sck_ctr : integer range 0 to 63;
	
	begin
		if(rst = '0') then 
			state <= IDLE;
			sck_ctr := 0;
			
		elsif(sck_internal'event and sck_internal = '1') then
			
			case state is
			when IDLE => 
				if(start_conv = '1') then 
					state <= START_CONVERSION ;
				end if;
	
			when START_CONVERSION =>
				sck_ctr := sck_ctr + 1;
				if(sck_ctr >= Ncycles_strobe-1) then
					STATE <=WAIT_FOR_SAMPLE;
					sck_ctr := 0;
				end if;
				
			when WAIT_FOR_SAMPLE =>
				sck_ctr := sck_ctr + 1;
				if(sck_ctr >= Ncycles_wait-1) then
					STATE <= CONV_CH1;
					sck_ctr := 0;
				end if;
				
			when CONV_CH1 => 
				data1(sck_ctr) := MISO;
				sck_ctr := sck_ctr + 1;
					
				if(sck_ctr >= Nbit_data) then
					state <= CHANNEL_BRK;
					sck_ctr := 0;
				end if;
			
			when CHANNEL_BRK =>
				sck_ctr := sck_ctr + 1;
					
				if(sck_ctr >= Ncycles_break-1) then
					state <= CONV_CH0;
					sck_ctr := 0;
				end if;
			
			when others =>				-- CONV_CH0
				data0(sck_ctr) := MISO;
				sck_ctr := sck_ctr + 1;
					
				if(sck_ctr >= Nbit_data) then
					state <= IDLE;
					sck_ctr := 0;
				end if;
			
			end case;
			
		end if;
	end process adc;

	SCK_Enable <= '0' when state = IDLE else '1';
	AD_CONV <= '1' when state = START_CONVERSION else '0';
	ADC_Dataout <= data1(Nbit_data-1 downto 0) & data0(Nbit_data-1 downto 0) when state = IDLE;

end adcca;

