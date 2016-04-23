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
use IEEE.STD_LOGIC_SIGNED.ALL;
use work.sin_lut_pkg.all;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity sin_LUT is
	Generic(	MAX_phase : integer	:= 1390;
			Nbit_sine : integer 	:= 16);
				
    Port ( rst : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           phase : in  integer range 0 to MAX_phase-1;
           sine : out  integer range 0 to (2**Nbit_sine)-1);
end sin_LUT;

architecture sin_LUT_a of sin_LUT is
	
begin

	mem: process(rst, clk) is
	begin
		if(rst = '0') then
			sine <= 0;
		
		elsif(clk'event and clk = '1') then
				sine <= lut_array(phase);
		end if;
	end process mem;

end sin_LUT_a;

