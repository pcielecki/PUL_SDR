----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    22:12:50 04/08/2016 
-- Design Name: 
-- Module Name:    Phase_accumulator - pha_a 
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

entity Phase_accumulator is
	Generic(Nbit_phase : integer := 10);
    Port ( rst : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           phase_mul : in  STD_LOGIC_VECTOR (Nbit_phase-1 downto 0);
           phase : out  STD_LOGIC_VECTOR (Nbit_phase-1 downto 0));
end Phase_accumulator;

architecture pha_a of Phase_accumulator is
		signal accumulated_phase : std_logic_vector(Nbit_phase-1 downto 0);
begin	
	pha: process(clk, rst) is
		
	begin
	
		if(rst = '0') then 
			accumulated_phase <= (others => '0');
		elsif(clk'event and clk = '1') then
			accumulated_phase <= accumulated_phase + phase_mul;
		end if;

	end process pha;

	phase <= accumulated_phase;

end pha_a;

