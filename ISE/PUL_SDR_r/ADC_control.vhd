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
           clk : in  STD_LOGIC;
			  start_conv : in std_logic;
           SCK_enable : out  STD_LOGIC;
           MISO : in  STD_LOGIC;
           AD_CONV : out  STD_LOGIC;
			  ADC_Dataout : out std_logic_vector(Nbit_data-1 downto 0)
			  );
end ADC_control;

architecture adcca of ADC_control is
	type stany is (IDLE, START_CONVERSION, CONVERSION_IN_PROGRESS);
	shared variable state : stany := IDLE;
	shared variable data : std_logic_vector(Nbit_data-1 downto 0);
begin
	adc: process(clk, rst) is
	
	variable sck_ctr : integer range 0 to 64;
	
	begin
			if(rst = '0') then 
				sck_enable <= '0'; 
				ad_conv <= '0';
				sck_ctr := 0;
				data := (others => '0');
				
			elsif(clk'event and clk = '1') then
				if(state = IDLE and start_conv = '1') then
					state := START_CONVERSION;
				end if;
					
			elsif(state = START_CONVERSION) then
				sck_ctr := sck_ctr + 1;
				if(sck_ctr >= Ncycles_strobe) then
					STATE := CONVERSION_IN_PROGRESS;
					sck_ctr := 0;
				end if;
			
			elsif(state = CONVERSION_IN_PROGRESS) then
				data(sck_ctr) := MISO;
				sck_ctr := sck_ctr + 1;
				
				if(sck_ctr >= Nbit_data + 4) then
					state := IDLE;
					sck_ctr := 0;
				end if;
			
			end if;
		
	end process adc;

	SCK_Enable <= '1' when state = CONVERSION_IN_PROGRESS else '0';
	AD_CONV <= '1' when state = START_CONVERSION else '0';
	ADC_Dataout <= data when state = IDLE;

end adcca;

