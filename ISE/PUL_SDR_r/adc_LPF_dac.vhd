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

entity adc_LPF_dac is
	Generic(Nbit_data : integer := 12);
    Port ( rst : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           SPI0_SCK : out std_logic;
			  AD_CONV : out std_logic;
			  SPI0_MISO : in  STD_LOGIC;
			  SPI0_MOSI : out std_Logic;
			  SPI0_SS : out std_logic
			  );
end adc_LPF_dac;

architecture adc_LPF_dac_a of adc_LPF_dac is

	component ADC_TOP is
		Generic(Nbit : integer := 12;
					ADC_speed : integer range 0 to 2**4 - 1);
		 Port ( rst : in  STD_LOGIC;
				  clk : in  STD_LOGIC;
				  start_conv : in std_logic;
				  SPI_SCK : in  STD_LOGIC;
				  SPI_MISO : in  STD_LOGIC;
				  AD_CONV : out  STD_LOGIC;
				  ADC_dataout : out  STD_LOGIC_VECTOR(2*Nbit-1 downto 0));
	end component ADC_TOP;
	
	component lpf_ipcore is
	port(
		clk : in std_logic;
		rfd, rdy : out std_logic;
		data_in : in std_logic_vector(11 downto 0);
		data_out : out std_logic_vector(27 downto 0)
		);
	end component lpf_ipcore;

	
	component DAC_TOP is
		Generic(SPI_SPEED: integer := 4);
    Port ( CLK : in  STD_LOGIC;
           RST : in  STD_LOGIC;
           DAC_MOSI : out  STD_LOGIC;
           DAC_CLR : out  STD_LOGIC;
           DAC_SCK : out  STD_LOGIC;
           DAC_CS : out  STD_LOGIC;
			  DAC_outval : in std_logic_vector(11 downto 0)
		   );
	end component	DAC_TOP;
	

	signal dac_sck: std_logic;
	signal concatenated_data : std_logic_vector(2*Nbit_data-1 downto 0);
	signal filter_out : std_logic_vector(Nbit_data-1 downto 0);
begin
	
	adc: adc_top generic map(Nbit => Nbit_data, ADC_Speed => 2)
					port map(rst => rst, clk => clk,
					start_conv => '1',
					SPI_SCK => dac_sck,
					SPI_MISO => SPI0_MISO,
					AD_CONV => AD_CONV,
					ADC_Dataout => concatenated_data
					);
					
					
	filtr_audio : lpf_ipcore port map(
					clk => clk, 
					rdy => open, 
					rfd => open, 
						data_in => concatenated_data(Nbit_data-1 downto 0),
						data_out => filter_out
						);
							
	dac: dac_top 
					generic map(SPI_SPEED => 4)
					port map(clk=>clk ,rst => rst,
					DAC_MOSI => SPI0_MOSI,
					DAC_CLR => open,
					DAC_SCK => dac_sck,
					DAC_CS => SPI0_SS,
					DAC_outval => filter_ouut
					);
	
	SPI0_SCK <= dac_sck;


end adc_LPF_dac_a;

