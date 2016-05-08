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
use IEEE.NUMERIC_STD.ALL;
use std.textio.all;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity NCO is
	generic (
				MAX_phase : integer := 125;
				Nbit_sine : integer := 16);
    Port ( rst : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           mul : in  integer range 0 to MAX_phase-1;
			  phi0 : in integer range 0 to MAX_phase-1;
			  sig : out  signed(Nbit_sine-1 downto 0) );
end NCO;

architecture NCO_a of NCO is

	component sin_LUT is
		Generic(	MAX_phase : integer	:= 125;
				Nbit_sine : integer 	:= 16);
					
		 Port ( rst : in  STD_LOGIC;
				  clk : in  STD_LOGIC;
				  phase : in  integer range 0 to MAX_phase-1;
				  sine : out  integer range -(2**(Nbit_sine-1)) to (2**(Nbit_sine-1))-1
				  );
	end component sin_LUT;

	component Phase_accumulator is
		Generic(MAX_phase : integer := 1390);
		 Port ( rst : in  STD_LOGIC;
				  clk : in  STD_LOGIC;
				  phase_mul : in integer range 0 to 2*MAX_phase;
				  phi0 : in integer range 0 to MAX_phase;
				  phase : out  integer range 0 to 2*MAX_phase
				  );
	end component Phase_accumulator;
			 
		 
		--constant c_Nbit_phase : integer := 11;
		constant c_Nbit_sine : integer := 16;
		
		signal phase : integer range 0 to MAX_phase-1;		
		signal wy_sig : integer range -(2**(c_Nbit_sine-1)) to 2**(c_Nbit_sine-1)-1;
		
begin
	Lookup_table : sin_LUT 
		generic map(MAX_phase => MAX_phase, Nbit_sine => c_Nbit_sine)
		port map(rst => rst, clk => clk, phase => phase, sine => wy_sig);
		
	pha : Phase_accumulator
		generic map(MAX_phase => MAX_phase)
		port map(rst => rst, clk => clk, phase_mul => mul, phi0 => phi0, phase => phase);
		
	sig <= to_signed(wy_sig, c_Nbit_sine);




end NCO_a;

