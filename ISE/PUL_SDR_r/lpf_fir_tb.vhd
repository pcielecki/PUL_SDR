--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   15:06:33 05/22/2016
-- Design Name:   
-- Module Name:   /home/piotr/workspace/PUL/PUL_SDR/ISE/PUL_SDR_r/lpf_fir_tb.vhd
-- Project Name:  PUL_SDR_r
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: lpf_ipcore
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
 
ENTITY lpf_fir_tb IS
END lpf_fir_tb;
 
ARCHITECTURE behavior OF lpf_fir_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT lpf_ipcore
    PORT(
         clk : IN  std_logic;
         rfd : OUT  std_logic;
         rdy : OUT  std_logic;
         data_in : IN  std_logic_vector(11 downto 0);
         data_out : OUT  std_logic_vector(27 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal data_in : std_logic_vector(11 downto 0) := (others => '0');

 	--Outputs
   signal rfd : std_logic;
   signal rdy : std_logic;
   signal data_out : std_logic_vector(27 downto 0);

   -- Clock period definitions
   constant clk_period : time := 1 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: lpf_ipcore PORT MAP (
          clk => clk,
          rfd => rfd,
          rdy => rdy,
          data_in => data_in,
          data_out => data_out
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
		data_in <= "000000000001";
		wait for 50*clk_period;
		
		data_in <= "000000000000";
		wait;
		
		
   end process;

END;
