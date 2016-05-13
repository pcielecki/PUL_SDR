--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   15:01:21 05/13/2016
-- Design Name:   
-- Module Name:   /home/piotr/workspace/PUL/PUL_SDR/ISE/PUL_SDR_r/adc_tb.vhd
-- Project Name:  PUL_SDR_r
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: ADC_TOP
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY adc_tb IS
END adc_tb;
 
ARCHITECTURE behavior OF adc_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT ADC_TOP
    PORT(
         rst : IN  std_logic;
         clk : IN  std_logic;
         start_conv : IN  std_logic;
         SPI_SCK : OUT  std_logic;
         SPI_MISO : IN  std_logic;
         AD_CONV : OUT  std_logic;
         ADC_dataout : OUT  std_logic_vector(11 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal rst : std_logic := '0';
   signal clk : std_logic := '0';
   signal start_conv : std_logic := '0';
   signal SPI_MISO : std_logic := '0';

 	--Outputs
   signal SPI_SCK : std_logic;
   signal AD_CONV : std_logic;
   signal ADC_dataout : std_logic_vector(4 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
	constant sample_data : std_logic_vector(4 downto 0) := "11001";
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: ADC_TOP generic map(2, 1)	PORT MAP (
          rst => rst,
          clk => clk,
          start_conv => start_conv,
          SPI_SCK => SPI_SCK,
          SPI_MISO => SPI_MISO,
          AD_CONV => AD_CONV,
          ADC_dataout => ADC_dataout
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
		wait for 2*clk_period;
		rst <= '1';
		wait for 10*clk_period;
   end process;

END;
