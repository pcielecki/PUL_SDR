----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:57:49 04/23/2016 
-- Design Name: 
-- Module Name:    clk_prescaler - presc_a 
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

entity clk_prescaler is
	Generic (Nbit : integer := 10);
    Port ( clk : in  STD_LOGIC;
           rst : in  STD_LOGIC;
           clk_out : out  STD_LOGIC);
end clk_prescaler;

architecture presc_a of clk_prescaler is
	signal ctr : std_logic_vector(Nbit-1 downto 0);
	constant max_ctr : std_logic_vector(Nbit-1 downto 0) := (others => '1');
	signal clk_internal : std_logic;
begin

presc: process(clk, rst) is
begin
	if(rst = '0') then 
		ctr <= (others => '0');
		clk_internal <= '0';
		
	elsif(clk'event and clk = '1') then
		ctr <= ctr + '1';		
		if(max_ctr = ctr) then
				clk_internal <= clk_internal xor '1';
				ctr <= (others => '0');
			end if;
		
	end if;
end process presc;

	clk_out <= clk_internal;

end presc_a;

