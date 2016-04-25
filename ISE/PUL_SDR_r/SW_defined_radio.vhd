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


entity demodulator is
	Generic(sample_in_Nbit : integer := 16;
				sample_out_Nbit : integer := 16
				);
    Port ( rst : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           hf_in : in  STD_LOGIC_VECTOR (sample_in_Nbit-1 downto 0);
           audio_out : out  STD_LOGIC_VECTOR (sample_out_Nbit-1 downto 0);
			  clk_out : out std_logic
			  );
end demodulator;

architecture dem_a of demodulator is
constant nco_mul : integer := 4;
constant Nbit_prescaler : integer := 4;
constant c_maxphase : integer := 125;

signal local : std_logic_vector(sample_in_nbit-1 downto 0);

signal clk_prescalled : std_logic;

	component NCO is
		generic (
					MAX_phase : integer := 125;
					Nbit_sine : integer := 16);
		 Port ( rst : in  STD_LOGIC;
				  clk : in  STD_LOGIC;
				  mul : in  integer range 0 to MAX_phase-1;
				  sig : out  std_logic_vector(Nbit_sine-1 downto 0) );
	end component NCO;

	component clk_prescaler is
		Generic (Nbit : integer := 10);
		 Port ( clk : in  STD_LOGIC;
				  rst : in  STD_LOGIC;
				  clk_out : out  STD_LOGIC);
	end component clk_prescaler;
	
	component nbit_mul is
	Generic(Nbit : integer := 8);
    Port ( A : in  STD_LOGIC_VECTOR(Nbit-1 downto 0);
           B : in  STD_LOGIC_VECTOR(Nbit-1 downto 0);
           C_MSHW : out  STD_LOGIC_VECTOR(Nbit-1 downto 0);
			  C_LSHW : out  STD_LOGIC_VECTOR(Nbit-1 downto 0)
			  );
	end component nbit_mul;
	
begin		
	heterodyna : nco 
					generic map(
							MAX_phase => c_maxphase, 
							Nbit_sine => sample_in_Nbit
					)
					port map(
							rst => rst, 
							clk => clk_prescalled, 
							mul => nco_mul, 
							sig => local
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
	
	mieszacz : Nbit_mul 
					generic map(
						Nbit => sample_in_Nbit
					)
					port map(
						A => hf_in,
						B => local,
						C_MSHW => audio_out
					);
							
	
	clk_out <= clk_prescalled;
	
end dem_a;

