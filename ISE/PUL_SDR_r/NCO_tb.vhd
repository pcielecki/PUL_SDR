--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   22:44:59 04/08/2016
-- Design Name:   
-- Module Name:   C:/Users/Piotr/workspace/PUL_SDR/ISE/PUL_SDR_r/NCO_tb.vhd
-- Project Name:  PUL_SDR_r
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: NCO
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
 
ENTITY NCO_tb IS
END NCO_tb;
 
ARCHITECTURE behavior OF NCO_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT NCO
	 GENERIC (
			Nbit_phase : integer := 10;
			Nbit_sine : integer := 16);
    PORT(
         rst : IN  std_logic;
         clk : IN  std_logic;
         mul : IN  std_logic_vector(Nbit_phase-1 downto 0);
         sig : OUT  std_logic_vector(Nbit_sine-1 downto 0)
        );
    END COMPONENT;
    
	constant c_Nbit_phase : integer := 3;
	constant c_Nbit_sine : integer := 3;
	
   --Inputs
   signal rst : std_logic := '0';
   signal clk : std_logic := '0';
   signal mul : std_logic_vector(c_Nbit_phase-1 downto 0) := (others => '0');

 	--Outputs
   signal sig : std_logic_vector(c_Nbit_sine-1 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: NCO 
		GENERIC MAP (
			Nbit_phase => C_Nbit_phase,
			Nbit_sine => C_Nbit_sine)
		PORT MAP (
          rst => rst,
          clk => clk,
          mul => mul,
          sig => sig
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
		wait for clk_period;
		rst <= '1';
		
		mul <= "001";
		wait for 8*clk_period;
		
		mul <= "011";
		wait for 8*clk_period;
		
		assert FALSE severity FAILURE;
   end process;

END;
