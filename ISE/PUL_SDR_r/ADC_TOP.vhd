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
           SPI_SCK : out  STD_LOGIC;
           SPI_MISO : in  STD_LOGIC;
           AD_CONV : out  STD_LOGIC;
           ADC_dataout : out  STD_LOGIC_VECTOR(Nbit-1 downto 0));
end ADC_TOP;

architecture adc_top_a of ADC_TOP is

constant base_prescalling : integer := 1;
signal sck_enable, sck_internal : std_logic;

	component ADC_control is
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
	end component ADC_control;

	component clk_prescaler is
		Generic (Nbit : integer := 10);
		 Port ( clk : in  STD_LOGIC;
				  rst : in  STD_LOGIC;
				  clk_out : out  STD_LOGIC);
	end component clk_prescaler;
	
begin
	adc_ctrl : adc_control generic map(Ncycles_strobe => 5, Nbit_data => 30)
									port map(rst => rst, clk => clk, 
									start_conv => start_conv,
									SCK_enable => sck_enable,
									MISO => SPI_MISO,
									AD_CONV => AD_CONV,
									ADC_Dataout => ADC_Dataout
									);

	sck_prescaler : clk_prescaler generic map(Nbit =>  ADC_Speed + base_prescalling)
						port map(clk => clk, rst => rst, clk_out => sck_internal);



	SPI_SCK <= sck_internal when sck_enable = '1' else '0';

end adc_top_a;

