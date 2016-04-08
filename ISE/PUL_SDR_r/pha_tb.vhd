--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   22:19:12 04/08/2016
-- Design Name:   
-- Module Name:   C:/Users/Piotr/workspace/PUL_SDR/ISE/PUL_SDR_r/pha_tb.vhd
-- Project Name:  PUL_SDR_r
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Phase_accumulator
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
 
ENTITY pha_tb IS
END pha_tb;
 
ARCHITECTURE behavior OF pha_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
	
    COMPONENT Phase_accumulator
	 Generic(Nbit_phase : integer := 10);
    PORT(
         rst : IN  std_logic;
         clk : IN  std_logic;
         phase_mul : IN  std_logic_vector(Nbit_phase-1 downto 0);
         phase : OUT  std_logic_vector(Nbit_phase-1 downto 0)
        );
    END COMPONENT;
    
	constant c_Nbit_phase : integer := 3;
   --Inputs
   signal rst : std_logic := '0';
   signal clk : std_logic := '0';
   signal phase_mul : std_logic_vector(c_Nbit_phase-1 downto 0) := (others => '0');

 	--Outputs
   signal phase : std_logic_vector(c_Nbit_phase-1 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Phase_accumulator 
		GENERIC MAP (Nbit_phase => c_Nbit_phase)
		PORT MAP (
          rst => rst,
          clk => clk,
          phase_mul => phase_mul,
          phase => phase
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
		rst <= '1';
		
		phase_mul <= "001";
		wait for 8*clk_period;
		
		
		phase_mul <= "100";
		wait for 8*clk_period;	
		
		assert FALSE severity FAILURE;
   end process;

END;
