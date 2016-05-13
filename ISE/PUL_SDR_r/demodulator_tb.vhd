--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   10:47:40 05/08/2016
-- Design Name:   
-- Module Name:   /home/piotr/workspace/PUL/PUL_SDR/ISE/PUL_SDR_r/demodulator_tb.vhd
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
use std.textio.all;
use ieee.std_logic_textio.all;
USE ieee.numeric_std.ALL;
 
ENTITY demodulator_tb IS
END demodulator_tb;
 
ARCHITECTURE behavior OF demodulator_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 	constant Nbit : integer := 12;
	constant Nbit_input : integer := 16;

	component demodulator is
		Generic(sample_in_Nbit : integer := 12;
					sample_out_Nbit : integer := 12
					);
		 Port ( rst : in  STD_LOGIC;
				  clk : in  STD_LOGIC;
				  hf_in : in  std_logic_vector (sample_in_Nbit-1 downto 0);
				  audio_out : out  std_logic_vector (sample_out_Nbit-1 downto 0);
				  clk_out : out std_logic
				  );
	end component demodulator;
    

   --Inputs
   signal rst : std_logic := '0';
   signal clk : std_logic := '0';
   signal hf_in : std_logic_vector(Nbit-1 downto 0) := (others => '0');

 	--Outputs
   signal audio_out : std_logic_vector(Nbit-1 downto 0);
   signal clk_out : std_logic;

   -- Clock period definitions
   constant clk_period : time := 0.1 ns;
 
BEGIN

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 
	-- Instantiate the Unit Under Test (UUT)
   uut: demodulator 
			generic map(
					Sample_in_Nbit => Nbit,
					Sample_out_Nbit => Nbit)
			PORT MAP (
          rst => rst,
          clk => clk,
          hf_in => hf_in,
          audio_out => audio_out,
          clk_out => clk_out
        );

     stim_proc: process
   begin		
		wait for 5*clk_period;
		rst <= '1';
      wait;
   end process;
	
	io_proc: process(clk_out) is
		variable VEC_LINE_w : line;
		file VEC_FILE_w : text is out "audio_out";
		
		variable VEC_LINE_w2 : line;
		file VEC_FILE_w2: text is out "hf_out";
		
		variable VEC_LINE_r : line;
		variable VEC_VAR_r	: integer range 0 to 2**16-1;
		file VEC_FILE_r : text is in "hf_in";
		

	begin
		if(clk_out'event and clk_out = '0' and rst = '1') then
			write (VEC_LINE_w, to_integer(unsigned(audio_out)));
			writeline (VEC_FILE_w, VEC_LINE_w);
			
			write (VEC_LINE_w2, to_integer(unsigned(hf_in)));
			writeline (VEC_FILE_w2, VEC_LINE_w2);
		
		elsif	(clk_out'event and clk_out = '1' and (not endfile(VEC_FILE_r)) and rst = '1') then
			readline(VEC_FILE_r, VEC_LINE_r);
			read(VEC_LINE_r, VEC_VAR_r);
			
			hf_in <= std_logic_vector(to_unsigned(VEC_VAR_r, Nbit_input));
		end if;
	end process io_proc;


END;
