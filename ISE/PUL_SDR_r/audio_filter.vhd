----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:27:20 05/08/2016 
-- Design Name: 
-- Module Name:    audio_filter - af_a 
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
use ieee.numeric_std.all;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity audio_filter is
		Generic(
		Ncoeffs : integer := 5;
		Nbit : integer := 16);
    Port ( rst : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           mf_in : in  unsigned(Nbit-1 downto 0);
           audio_out : out  unsigned(Nbit-1 downto 0)
			  );
end audio_filter;

architecture af_a of audio_filter is
	type s_buffarray is array (Ncoeffs-1 downto 0) of signed(Nbit-1 downto 0);
	type u_buffarray is array (Ncoeffs-1 downto 0) of unsigned(Nbit-1 downto 0);
	
	constant coeffs_array : s_buffarray := (others => "0000000000000001");
	signal samples_buffer : u_buffarray := (others => (others => '0'));
begin
	
	filter : process(clk, rst) is
		variable temp_audio_out : signed(2*Nbit downto 0);
	begin
		if(rst = '0') then audio_out <= (others => '0');
		elsif(clk'event and clk = '1') then
			--temp_audio_out := (others => '0');
			
			--for I in Ncoeffs-1 downto 0 loop
			--	temp_audio_out := temp_audio_out + coeffs_array(I) * signed('0' & samples_buffer(I));
			--end loop;
		
			samples_buffer <= mf_in & samples_buffer(Nbit-1 downto 1);
			--audio_out <= unsigned(coeffs_array(1));
			--audio_out <= unsigned(temp_audio_out(2*Nbit-1 downto Nbit));
		end if;

	end process filter;
end af_a;

