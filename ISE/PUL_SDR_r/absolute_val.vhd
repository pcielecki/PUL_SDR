----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:25:51 04/25/2016 
-- Design Name: 
-- Module Name:    absolute_val - abs_a 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity absolute_val is
	generic( Nbit : integer := 16);
	port(
		rst, clk : in  std_logic;
		signed_in : in std_logic_vector(Nbit-1 downto 0);
		abs_out	 : out std_logic_vector(Nbit-1 downto 0)
		);
	
end absolute_val;

architecture abs_a of absolute_val is

begin
	abs: proc(rst, clk) is
	begin
		if(signed_in(Nbit-1) = '0') then
			abs_out <= signed_in;
		else
			abs()
		end if;

end abs_a;

