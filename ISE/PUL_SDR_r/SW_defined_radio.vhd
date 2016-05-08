----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    20:34:12 04/09/2016 
-- Design Name: 
-- Module Name:    demodulator - dem_a 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use std.textio.all;
use ieee.std_logic_textio.all;
USE ieee.numeric_std.ALL;

entity demodulator is
	Generic(sample_in_Nbit : integer := 16;
				sample_out_Nbit : integer := 16
				);
    Port ( rst : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           hf_in : in  std_logic_vector (sample_in_Nbit-1 downto 0);
           audio_out : out  std_logic_vector (sample_out_Nbit-1 downto 0);
			  clk_out : out std_logic
			  );
end demodulator;

architecture dem_a of demodulator is
constant nco_mul : integer := 48	;
constant Nbit_prescaler : integer := 4;
constant c_maxphase : integer := 1390;

signal local_I, local_Q : signed(sample_in_nbit-1 downto 0);
signal mixed_I, mixed_Q, u_audio_out : signed(2*sample_in_nbit downto 0);

signal clk_prescalled : std_logic;

	component NCO is
		generic (
					MAX_phase : integer := 125;
					Nbit_sine : integer := 16);
		 Port ( rst : in  STD_LOGIC;
				  clk : in  STD_LOGIC;
				  mul : in  integer range 0 to MAX_phase-1;
				  phi0 : in integer range 0 to MAX_phase-1;
				  sig : out  signed(Nbit_sine-1 downto 0) );
	end component NCO;

	component clk_prescaler is
		Generic (Nbit : integer := 10);
		 Port ( clk : in  STD_LOGIC;
				  rst : in  STD_LOGIC;
				  clk_out : out  STD_LOGIC);
	end component clk_prescaler;
	

	
begin		
	Txlocal_I : nco 
					generic map(
							MAX_phase => c_maxphase, 
							Nbit_sine => sample_in_Nbit
					)
					port map(
							rst => rst, 
							clk => clk_prescalled, 
							mul => nco_mul, 
							phi0 => 0,
							sig => local_I
					);
					
	Txlocal_Q : nco 
					generic map(
							MAX_phase => c_maxphase, 
							Nbit_sine => sample_in_Nbit
					)
					port map(
							rst => rst, 
							clk => clk_prescalled, 
							mul => nco_mul, 
							phi0 => c_maxphase / 4,
							sig => local_Q
					);
							
	preskaler : clk_prescaler 
					generic map(
							Nbit => Nbit_prescaler
					)
					port map(
							clk => clk, 
							rst => rst, 
							clk_out => clk_prescalled
					);
	
	
	-- MIESZACZ --
	mixed_I <= local_I * signed('0' & hf_in);
	mixed_Q <= local_Q * signed('0' & hf_in);
	-- KONIEC MIESZACZA --
	
	-- PRZEKAZANIE ZEGARA PRESKALOWANEGO NA WYJSCIE DO STROBOWANIA ZAPISU/ODCZYTU --
	clk_out <= clk_prescalled;
	
	
	-- WARTOSC 'SKUTECZNA' (CUDZYSLOW CELOWY) --
	u_audio_out <= abs(mixed_I) + abs(mixed_Q);
	audio_out <= std_logic_vector(u_audio_out(32 downto 17));
	
	-- PROCESY POMOCNICZE I/O -- 
	IQwriteproc: process(clk_prescalled) is
		variable VEC_LINE_I : line;
		file VEC_FILE_I : text is out "local_I";
		
		variable VEC_LINE_mI : line;
		file VEC_FILE_mI : text is out "mixed_I";
		
		variable VEC_LINE_mQ : line;
		file VEC_FILE_mQ : text is out "mixed_Q";
		
		variable VEC_LINE_Q : line;
		file VEC_FILE_Q : text is out "local_Q";
		
	begin
		if(clk_prescalled'event and clk_prescalled = '0' and rst = '1') then
			write (VEC_LINE_I, to_integer(signed(local_I)));
			writeline (VEC_FILE_I, VEC_LINE_I);
	
			write (VEC_LINE_Q, to_integer(signed(local_Q)));
			writeline (VEC_FILE_Q, VEC_LINE_Q);
			
			write (VEC_LINE_mI, to_integer(signed(mixed_I)));
			writeline (VEC_FILE_mI, VEC_LINE_mI);
			
			write (VEC_LINE_mQ, to_integer(signed(mixed_Q)));
			writeline (VEC_FILE_mQ, VEC_LINE_mQ);
		end if;
	end process IQwriteproc;
	
end dem_a;

