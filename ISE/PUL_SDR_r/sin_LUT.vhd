----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    21:16:48 04/08/2016 
-- Design Name: 
-- Module Name:    sin_LUT - sin_LUT_a 
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
use IEEE.NUMERIC_STD.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity sin_LUT is
	Generic(	Nbit_phase : integer	:= 10;
			Nbit_sine : integer 	:= 16);
				
    Port ( rst : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           phase : in  STD_LOGIC_VECTOR (Nbit_phase-1 downto 0);
           sine : out  STD_LOGIC_VECTOR (Nbit_sine-1 downto 0));
end sin_LUT;

architecture sin_LUT_a of sin_LUT is
	type LUT_ARRAY_t is array (2**Nbit_phase-1 downto 0) of std_logic_vector(Nbit_sine-1 downto 0) ;
	constant lut_array : LUT_ARRAY_t 
		:= ("000", "001", "010", "011", "100", "101", "110", "111");
	
begin

	mem: process(rst, clk) is
	begin
		if(rst = '0') then
			sine <= (others => '0');
		
		elsif(clk'event and clk = '1') then
				sine <= lut_array(to_integer(unsigned(phase)));
		end if;
	end process mem;

end sin_LUT_a;

