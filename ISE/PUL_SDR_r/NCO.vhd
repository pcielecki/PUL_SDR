----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    22:32:07 04/08/2016 
-- Design Name: 
-- Module Name:    NCO - NCO_a 
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
use IEEE.NUMERIC_STD.ALL;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity NCO is
	generic (
				Nbit_phase : integer := 9;
				Nbit_sine : integer := 16);
    Port ( rst : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           mul : in  std_logic_vector(Nbit_phase-1 downto 0);
			sig : out  std_logic_vector(Nbit_sine-1 downto 0) );
end NCO;

architecture NCO_a of NCO is

	COMPONENT sin_LUT is
	Generic(	Nbit_phase : integer	:= 9;
			Nbit_sine : integer 	:= 16);
				
    Port ( rst : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           phase : in  integer range 0 to 2**Nbit_phase-1;
           sine : out  integer range 0 to 2**16-1);
	end COMPONENT sin_LUT;

	COMPONENT Phase_accumulator is
		Generic(Nbit_phase : integer := 9);
		 Port ( rst : in  STD_LOGIC;
				  clk : in  STD_LOGIC;
				  phase_mul : in integer range 0 to 2**(Nbit_phase-1)-1;
				  phase : out  integer range 0 to 2**Nbit_phase-1
				  );
	end COMPONENT;
		 
		 
		constant c_Nbit_phase : integer := 9;
		constant c_Nbit_sine : integer := 16;
		
		signal phase : integer range 0 to 2**c_Nbit_phase-1;		
		signal wy_sig : integer range 0 to 2**c_Nbit_sine-1;
		signal we_presc : integer range 0 to 2**(c_Nbit_sine-1)-1;
		
begin
	Lookup_table : sin_LUT 
		generic map(Nbit_phase => c_Nbit_phase, Nbit_sine => c_Nbit_sine)
		port map(rst => rst, clk => clk, phase => phase, sine => wy_sig);
		
	pha : Phase_accumulator
		generic map(Nbit_phase => c_Nbit_phase)
		port map(rst => rst, clk => clk, phase_mul => we_presc, phase => phase);
		
		
	sig <= std_logic_vector(to_unsigned(wy_sig, c_Nbit_sine));
	we_presc <= to_integer(unsigned(mul));


end NCO_a;

