----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:35:11 05/15/2016 
-- Design Name: 
-- Module Name:    bypass - bypass_a 
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

entity bypass is
	Generic(Nbit_data : integer := 12);
    Port ( rst : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           SPI0_SCK : out std_logic;
			  AD_CONV : out std_logic;
			  SPI0_MISO : in  STD_LOGIC;
			 
				SPI1_SCK : out std_logic;			  
           SPI1_MOSI : out  STD_LOGIC;
			  SPI1_SS : out std_logic
			  );
end bypass;

architecture bypass_a of bypass is
	component ADC_TOP is
		Generic(Nbit : integer := 12;
					ADC_speed : integer range 0 to 2**4 - 1);
		 Port ( rst : in  STD_LOGIC;
				  clk : in  STD_LOGIC;
				  start_conv : in std_logic;
				  SPI_SCK : out  STD_LOGIC;
				  SPI_MISO : in  STD_LOGIC;
				  AD_CONV : out  STD_LOGIC;
				  ADC_dataout : out  STD_LOGIC_VECTOR(2*Nbit-1 downto 0));
	end component ADC_TOP;
	
	component DAC_TOP is
    Port ( CLK : in  STD_LOGIC;
           RST : in  STD_LOGIC;
           DAC_MOSI : out  STD_LOGIC;
           DAC_CLR : out  STD_LOGIC;
           DAC_SCK : out  STD_LOGIC;
           DAC_CS : out  STD_LOGIC;
			  DAC_outval : in std_logic_vector(11 downto 0)
		   );
	end component	DAC_TOP;
	
	signal concatenated_data : std_logic_vector(2*Nbit_data-1 downto 0);
begin


	
	
	adc: adc_top generic map(Nbit => Nbit_data, ADC_Speed => 2)
					port map(rst => rst, clk => clk,
					start_conv => '1',
					SPI_SCK => SPI0_SCK,
					SPI_MISO => SPI0_MISO,
					AD_CONV => AD_CONV,
					ADC_Dataout => concatenated_data
					);
					
	dac: dac_top 
					port map( rst => rst, clk=> clk,
					DAC_MOSI => SPI1_MOSI,
					DAC_CLR => open,
					DAC_SCK => SPI1_SCK,
					DAC_CS => SPI1_SS,
					DAC_outval => concatenated_data(Nbit_data-1 downto 0)
					);

end bypass_a;

