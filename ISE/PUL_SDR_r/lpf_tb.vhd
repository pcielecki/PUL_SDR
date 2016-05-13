--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:38:55 05/08/2016
-- Design Name:   
-- Module Name:   /home/piotr/workspace/PUL/PUL_SDR/ISE/PUL_SDR_r/lpf_tb.vhd
-- Project Name:  PUL_SDR_r
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: audio_filter
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
USE ieee.numeric_std.ALL;
 
ENTITY lpf_tb IS
END lpf_tb;
 
ARCHITECTURE behavior OF lpf_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT audio_filter
    PORT(
         rst : IN  std_logic;
         clk : IN  std_logic;
         mf_in : IN  unsigned(15 downto 0);
         audio_out : OUT  unsigned(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal rst : std_logic := '0';
   signal clk : std_logic := '0';
   signal mf_in : unsigned(15 downto 0) := (others => '0');

 	--Outputs
   signal audio_out : unsigned(15 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: audio_filter PORT MAP (
          rst => rst,
          clk => clk,
          mf_in => mf_in,
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
		wait for 2*clk_period;
		rst <= '1';
		
		wait for 2*clk_period;
		
		mf_in <= "0000000000000001";
		wait for 1*clk_period;
		
		mf_in <= (others => '0');
		
		wait for 10*clk_period;

      assert FALSE severity FAILURE;
   end process;

END;
