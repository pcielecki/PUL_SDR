----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:21:34 05/13/2016 
-- Design Name: 
-- Module Name:    ADC_TOP - adc_top_a 
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

entity ADC_TOP is
	Generic(Nbit : integer := 12;
				ADC_speed : integer range 0 to 2**4 - 1);
    Port ( rst : in  STD_LOGIC;
           clk : in  STD_LOGIC;
			  start_conv : in std_logic;
           SPI_SCK : in  STD_LOGIC;
           SPI_MISO : in  STD_LOGIC;
           AD_CONV : out  STD_LOGIC;
           ADC_dataout : out  STD_LOGIC_VECTOR(2*Nbit-1 downto 0));
end ADC_TOP;

architecture adc_top_a of ADC_TOP is



	component ADC_control is
		generic(
			Ncycles_strobe : integer := 2;
			Nbit_data : integer := 30
			);
		 Port ( rst : in  STD_LOGIC;
				  sck_internal : in  STD_LOGIC;
				  start_conv : in std_logic;
				  MISO : in  STD_LOGIC;
				  AD_CONV : out  STD_LOGIC;
				  ADC_Dataout : out std_logic_vector(2*Nbit_data-1 downto 0)
				  );
	end component ADC_control;


	
begin
	adc_ctrl : adc_control generic map(Ncycles_strobe => 1, Nbit_data => Nbit)
									port map(rst => rst, 
									sck_internal => SPI_SCK, 
									start_conv => start_conv,
									MISO => SPI_MISO,
									AD_CONV => AD_CONV,
									ADC_Dataout => ADC_Dataout
									);


end adc_top_a;

