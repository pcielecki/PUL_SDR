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
	type stany is (IDLE, START_CONVERSION, WAIT_FOR_SAMPLE, CONVERSION_IN_PROGRESS);
	signal state : stany := IDLE;
	shared variable temp_data: std_logic_vector(0 to 2*Nbit_data+1);
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
					STATE <= CONVERSION_IN_PROGRESS;
					sck_ctr := 0;
				end if;
				

			when others =>				-- CONVERSION_IN_PROGRESS
				temp_data(sck_ctr) := MISO;
				sck_ctr := sck_ctr + 1;
					
				if(sck_ctr >= 2*Nbit_data+2) then
					state <= IDLE;
					sck_ctr := 0;
				end if;
			
			end case;
			
		end if;
	end process adc;

	SCK_Enable <= '0' when state = IDLE else '1';
	AD_CONV <= '1' when state = START_CONVERSION else '0';
	ADC_Dataout <= temp_data(0 to Nbit_data-1) &
						temp_data(Nbit_data+2 to 2*Nbit_data+1) 					
							when state = IDLE;

end adcca;

