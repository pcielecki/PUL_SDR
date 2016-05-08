----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:09:12 04/09/2016 
-- Design Name: 
-- Module Name:    nbit_mul - mul_a 
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
use ieee.std_logic_signed.all;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity nbit_mul is
	Generic(Nbit : integer := 8);
    Port ( A : in  STD_LOGIC_VECTOR(Nbit-1 downto 0);
           B : in  STD_LOGIC_VECTOR(Nbit-1 downto 0);
           C : out  STD_LOGIC_VECTOR(2*Nbit-1 downto 0)
			  );
end nbit_mul;

-- MSHW = Most significant halfword
-- LSHW = Least significant HW

architecture mul_a of nbit_mul is
begin
	C <= (A*B);
end mul_a;

