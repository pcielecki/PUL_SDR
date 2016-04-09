--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   12:42:52 04/09/2016
-- Design Name:   
-- Module Name:   C:/Users/Piotr/workspace/PUL_SDR/ISE/PUL_SDR_r/decimator_tb.vhd
-- Project Name:  PUL_SDR_r
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: decimator
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
use ieee.numeric_std.all;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY decimator_tb IS
END decimator_tb;
 
ARCHITECTURE behavior OF decimator_tb IS 
	component decimator is
		Generic( Nbit_sig : integer := 16;
					Nbit_decimation_factor : integer := 8);
		 Port ( rst : in  STD_LOGIC;
				  clk : in  STD_LOGIC;
				  sig_in : in  STD_LOGIC_VECTOR (Nbit_sig-1 downto 0);
				  decimation_factor : in  STD_LOGIC_VECTOR (Nbit_decimation_factor-1 downto 0);
				  sig_out : out  STD_LOGIC_VECTOR (Nbit_sig-1 downto 0));
	end component decimator;
    
	 constant c_Nbit_sig : integer := 5;
	 constant c_Nbit_decimation_factor :integer := 3;
   --Inputs
   signal rst : std_logic := '0';
   signal clk : std_logic := '0';
   signal sig_in : std_logic_vector(c_Nbit_sig-1 downto 0) := (others => '0');
   signal decimation_factor : std_logic_vector(c_Nbit_decimation_factor-1 downto 0) := (others => '0');

 	--Outputs
   signal sig_out : std_logic_vector(c_Nbit_sig-1 downto 0);

   -- Clock period definitions
   constant clk_period : time := 3 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: decimator 
		GENERIC MAP (
				Nbit_sig => c_Nbit_sig,
				Nbit_decimation_factor => c_Nbit_decimation_factor)
		PORT MAP (
          rst => rst,
          clk => clk,
          sig_in => sig_in,
          decimation_factor => decimation_factor,
          sig_out => sig_out
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
		wait for 1.5*clk_period;
		
		rst <= '1';
		
		for J in 1 to 2**(c_Nbit_decimation_factor) loop
			decimation_factor <= std_logic_vector(to_unsigned(J, c_Nbit_decimation_factor));

			for I in 0 to 2**(c_Nbit_sig) loop
				sig_in <= std_logic_vector(to_unsigned(I, c_Nbit_sig));
				wait for 1*clk_period;
			end loop;

		end loop;
		assert FALSE severity FAILURE;
   end process;

END;
