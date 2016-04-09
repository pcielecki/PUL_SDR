----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:30:58 04/09/2016 
-- Design Name: 
-- Module Name:    decimator - deci_a 
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
use ieee.std_logic_unsigned.all;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity decimator is
	Generic( Nbit_sig : integer := 16;
				Nbit_decimation_factor : integer := 8);
    Port ( rst : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           sig_in : in  STD_LOGIC_VECTOR (Nbit_sig-1 downto 0);
           decimation_factor : in  STD_LOGIC_VECTOR (Nbit_decimation_factor-1 downto 0);
           sig_out : out  STD_LOGIC_VECTOR (Nbit_sig-1 downto 0));
end decimator;

architecture deci_a of decimator is
	signal decimation_ctr : std_logic_vector(Nbit_decimation_factor-1 downto 0);
	
	constant decimation_ctr_padding : std_logic_vector(Nbit_decimation_factor-2 downto 0) := (others => '0');

begin
	decimation : process(clk, rst) is
	begin
		if(rst = '0') then 	
			decimation_ctr <= (others => '0');
		
		elsif(clk'event and clk = '1') then
		
			if(decimation_ctr = decimation_factor) then
				sig_out <= sig_in; 
			end if;
			
			decimation_ctr <= decimation_ctr + '1';
			
			if(decimation_ctr = decimation_factor) then
				decimation_ctr <= decimation_ctr_padding & '1';
			end if;
		end if;
		
	end process decimation;
	
	
end deci_a;

