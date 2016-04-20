--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   21:13:07 04/09/2016
-- Design Name:   
-- Module Name:   C:/Users/Piotr/workspace/PUL_SDR/ISE/PUL_SDR_r/demodulator_tb.vhd
-- Project Name:  PUL_SDR_r
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: demodulator
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
 
ENTITY demodulator_tb IS
END demodulator_tb;
 
ARCHITECTURE behavior OF demodulator_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT demodulator
	 	Generic(sample_in_Nbit : integer := 16;
				sample_out_Nbit : integer := 16);
    PORT(
         rst : IN  std_logic;
         clk : IN  std_logic;
         hf_in : IN  std_logic_vector(3 downto 0);
         audio_out : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    
   --Inputs
   signal rst : std_logic := '0';
   signal clk : std_logic := '0';
   signal hf_in : std_logic_vector(3 downto 0) := (others => '0');

 	--Outputs
   signal audio_out : std_logic_vector(3 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: demodulator 
		generic map(4, 4)
		PORT MAP (
          rst => rst,
          clk => clk,
          hf_in => hf_in,
          audio_out => audio_out
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
		wait for 1.5 * clk_period;
		rst <= '1';
		
		hf_in <= (others => '0');
		hf_in(0) <= '1';
		
		wait for 100*clk_period;
	
		assert FALSE severity FAILURE;

	end process;

END;
