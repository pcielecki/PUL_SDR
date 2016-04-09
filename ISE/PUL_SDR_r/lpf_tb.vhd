--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   16:50:12 04/09/2016
-- Design Name:   
-- Module Name:   C:/Users/Piotr/workspace/PUL_SDR/ISE/PUL_SDR_r/lpf_tb.vhd
-- Project Name:  PUL_SDR_r
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: audio_LP_filter
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
 
ENTITY lpf_tb IS
END lpf_tb;
 
ARCHITECTURE behavior OF lpf_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT audio_LP_filter
	 	Generic(Nbit : integer := 16;
				N_coeffs : integer := 8);
    PORT(
         rst : IN  std_logic;
         clk : IN  std_logic;
         sig_in : IN  std_logic_vector(Nbit-1 downto 0);
         sig_out : OUT  std_logic_vector(Nbit-1 downto 0)
        );
    END COMPONENT;
    
	 constant c_Nbit : integer := 4;
	 constant c_N_coeffs : integer := 4;

   --Inputs
   signal rst : std_logic := '0';
   signal clk : std_logic := '0';
   signal sig_in : std_logic_vector(c_Nbit-1 downto 0) := (others => '0');

 	--Outputs
   signal sig_out : std_logic_vector(c_Nbit-1 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
	--constant sig_pad : std_logic_vector(14 downto 0) := (others => '0');
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: audio_LP_filter 
		generic map(nbit => c_Nbit, n_coeffs => c_N_coeffs) 
		PORT MAP (
          rst => rst,
          clk => clk,
          sig_in => sig_in,
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
		
		wait for 50 ns;
		sig_in <="0001";
		wait for 1*clk_period;
		
		sig_in <= "0000";
		wait for 20*clk_period;
		
		assert false severity Failure;
   end process;

END;
