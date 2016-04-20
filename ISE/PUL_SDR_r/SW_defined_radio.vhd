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
           audio_out : out  STD_LOGIC_VECTOR (sample_out_Nbit-1 downto 0)
			  );
end demodulator;

architecture dem_a of demodulator is
	component nbit_mul is
		Generic(Nbit : integer := 8);
		 Port ( A : in  STD_LOGIC_VECTOR(Nbit-1 downto 0);
				  B : in  STD_LOGIC_VECTOR(Nbit-1 downto 0);
				  C_MSHW : out  STD_LOGIC_VECTOR(Nbit-1 downto 0);
				  C_LSHW : out  STD_LOGIC_VECTOR(Nbit-1 downto 0)
				  );
	end component nbit_mul;
	
	component NCO is
		generic (
					Nbit_phase : integer := 9;
					Nbit_sine : integer := 16);
		 Port ( rst : in  STD_LOGIC;
				  clk : in  STD_LOGIC;
				  mul : in  std_logic_vector(Nbit_phase-1 downto 0);
				sig : out  std_logic_vector(Nbit_sine-1 downto 0) );
	end component NCO;
	
	component audio_LP_filter is
		Generic(Nbit : integer := 16;
					N_coeffs : integer := 8);
		Port ( rst : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           sig_in : in  STD_LOGIC_VECTOR (Nbit-1 downto 0);
           sig_out : out  STD_LOGIC_VECTOR (Nbit-1 downto 0));
	end component audio_LP_filter;
	
	component decimator is
		Generic( Nbit_sig : integer := 16;
				Nbit_decimation_factor : integer := 8);
		Port ( rst : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           sig_in : in  STD_LOGIC_VECTOR (Nbit_sig-1 downto 0);
           decimation_factor : in  STD_LOGIC_VECTOR (Nbit_decimation_factor-1 downto 0);
           sig_out : out  STD_LOGIC_VECTOR (Nbit_sig-1 downto 0));
	end component decimator;
	
	constant SDR_Nbit : integer := 16;
	constant dec_factor : std_logic_vector(1 downto 0) := "10";
	
	constant c_Nbit_phase : integer := 9;
	--constant c_Nbit_signal : integer := 16;
	
	signal s_local, s_mixed, s_lf : std_logic_vector(SDR_Nbit-1 downto 0);
	
begin		
	sdr_nco : NCO
		generic map (Nbit_phase => c_Nbit_phase, Nbit_sine => SDR_Nbit)
		port map		(rst => rst, 
						clk => clk,
						mul => "000000011",
						sig => s_local	);
										
	mixer : nbit_mul 
		generic map(Nbit => SDR_Nbit)
		port map	  (A => hf_in,
						B => s_local,
						C_LSHW => s_mixed,
						C_MSHW => open);
						
	LPF : audio_lp_filter
		generic map	(Nbit => SDR_Nbit,
							N_coeffs => 4)
		port map		(rst => rst,
						clk => clk,
						sig_in => s_mixed,
						sig_out => s_lf	);
						
	dec : decimator
		generic map	(Nbit_sig => SDR_Nbit,
						Nbit_decimation_factor => 2)
		port map		(rst => rst,
						clk => clk,
						sig_in => s_lf,
						decimation_factor => dec_factor,
						sig_out => audio_out	);
end dem_a;

