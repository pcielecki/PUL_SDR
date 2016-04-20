--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   20:07:45 04/20/2016
-- Design Name:   
-- Module Name:   C:/Users/Piotr/workspace/PUL_SDR/ISE/PUL_SDR_r/nco_tb.vhd
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
use std.textio.all;
use ieee.std_logic_unsigned.all;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
USE ieee.numeric_std.ALL;
 
ENTITY nco_tb IS
END nco_tb;
 
ARCHITECTURE behavior OF nco_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
	component NCO is
		generic (
					Nbit_phase : integer := 9;
					Nbit_sine : integer := 16);
		 Port ( rst : in  STD_LOGIC;
				  clk : in  STD_LOGIC;
				  mul : in  std_logic_Vector(Nbit_phase-1 downto 0);
				sig : out  std_logic_vector(Nbit_sine-1 downto 0));
	end component NCO;
    
	constant Nbit_phase : integer := 9;
	constant Nbit_sine : integer := 16;

   --Inputs
   signal rst : std_logic := '0';
   signal clk : std_logic := '0';

		signal		  mul :  std_logic_Vector(Nbit_phase-1 downto 0) := (others => '0');
		signal		sig :   std_logic_vector(Nbit_sine-1 downto 0) := (others => '0');


   -- Clock period definitions
   constant clk_period : time := 1 ns;
	 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: NCO PORT MAP (
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
		wait for 1.5*clk_period;
		rst <= '1';
		mul <= mul + '1';
		
		
		for i in 1 to 8 loop
			wait for 100*clk_period;
			mul <= std_logic_vector(to_unsigned(16 * i, Nbit_phase));
		end loop;
		
		
		wait ;
		--assert false severity failure;
		
		
   end process;
	
	write_proc: process(clk) is
		variable VEC_LINE : line;
		file VEC_FILE : text is out "nco";
	begin
		write (VEC_LINE, to_integer(unsigned(sig)));
		writeline (VEC_FILE, VEC_LINE);
	end process write_proc;

END;
