----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:23:49 04/09/2016 
-- Design Name: 
-- Module Name:    nbit_full_adder - fa_a 
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
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity nbit_full_adder is
	Generic( Nbit : integer := 8);
    Port ( A : in  STD_LOGIC_vector(Nbit-1 downto 0);
           B : in  STD_LOGIC_vector(Nbit-1 downto 0);
           C : out  STD_LOGIC_vector(Nbit-1 downto 0));
end nbit_full_adder;

architecture fa_a of nbit_full_adder is

begin
	C <= A + B;
end fa_a;

