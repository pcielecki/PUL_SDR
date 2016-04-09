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

entity Convolution_machine is
	Generic(Nbit : integer := 16;
				N_coeffs : integer := 8);
    Port ( rst : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           coeffs : in  STD_LOGIC_VECTOR (N_coeffs-1 downto 0);
           sig_in : in  STD_LOGIC_VECTOR (Nbit-1 downto 0);
           sig_out : out  STD_LOGIC_VECTOR (Nbit-1 downto 0));
end Convolution_machine;

architecture cm_a of Convolution_machine is
	type shift_reg is array(N_coeffs-1 downto 0) of std_logic_vector(Nbit-1 downto 0);
	signal samples_array : shift_reg;
	signal temp_multiplied : shift_reg;
	
begin

	conv: process(clk, rst) is
	begin
	
		if(rst = '0') then
			sample_array <= (others => '0');
		
		elsif(clk'event and clk = '1') then
			samples_array <= sig_in & samples_array(Nbit-2 downto 0);
			
			
		end if;
		
	end process conv;
	

end cm_a;

