--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   21:57:30 04/08/2016
-- Design Name:   
-- Module Name:   C:/Users/Piotr/workspace/PUL_SDR/ISE/PUL_SDR_r/sinLUT_tb.vhd
-- Project Name:  PUL_SDR_r
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: sin_LUT
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
 
ENTITY sinLUT_tb IS
END sinLUT_tb;
 
ARCHITECTURE behavior OF sinLUT_tb IS 
 
	constant c_Nbit_phase : integer := 3;
	constant c_Nbit_sine : integer := 3;
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT sin_LUT
	 	Generic(	Nbit_phase : integer	:= 10;
			Nbit_sine : integer 	:= 16);
    PORT(
         rst : IN  std_logic;
         clk : IN  std_logic;
         phase : IN  std_logic_vector(Nbit_phase-1 downto 0);
         sine : OUT  std_logic_vector(Nbit_sine-1 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal rst : std_logic := '0';
   signal clk : std_logic := '0';
   signal phase : std_logic_vector(c_Nbit_phase-1 downto 0) := (others => '0');

 	--Outputs
   signal sine : std_logic_vector(c_Nbit_phase-1 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;

BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: sin_LUT 
		GENERIC MAP( 
			Nbit_phase => c_Nbit_phase,
			Nbit_sine => c_Nbit_sine	)	
		PORT MAP (
          rst => rst,
          clk => clk,
          phase => phase,
          sine => sine
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   stim_proc: process
   begin		
	
		rst <= '1';
		
		for I in 0 to 7 loop
			phase <= std_logic_vector(to_unsigned(I, c_Nbit_phase));
			wait for 1*clk_period;
		end loop;
		
		assert FALSE severity FAILURE;

   end process;

END;
