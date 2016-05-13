----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:26:57 04/09/2016 
-- Design Name: 
-- Module Name:    Convolution_machine - cm_a 
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

entity audio_LP_filter is
	Generic(Nbit : integer := 16;
				N_coeffs : integer := 8);
    Port ( rst : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           sig_in : in  STD_LOGIC_VECTOR (Nbit-1 downto 0);
           sig_out : out  STD_LOGIC_VECTOR (Nbit-1 downto 0));
end audio_LP_filter;

architecture audio_lpf_a of audio_LP_filter is
	type reg is array(N_coeffs-1 downto 0) of std_logic_vector(Nbit-1 downto 0);
	signal samples_array : reg;
	constant filter_coefficients_array : reg :=("0001", "0001", "0001", "0001");
	
	type reg2 is array(N_coeffs-1 downto 0) of std_logic_vector(2*Nbit-1 downto 0);
	signal temp_multiplied : reg2;
	signal temp_added : reg2;

begin
	filter: process(clk, rst) is
	begin
	
		if(rst = '0') then
			samples_array <= (others => (others=>'0'));
			
		elsif(clk'event and clk = '1') then
			samples_array <= sig_in & samples_array(Nbit-1 downto 1);			
		end if;
		
	end process filter;
	
	sig_out <= temp_added(0)(Nbit-1 downto 0	);
	
	temp_added(Nbit-1) <= (others => '0');
end audio_lpf_a;

