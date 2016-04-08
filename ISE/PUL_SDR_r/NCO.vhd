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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity NCO is
	generic (
				Nbit_phase : integer := 10;
				Nbit_sine : integer := 16);
    Port ( rst : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           mul : in  STD_LOGIC_VECTOR ( Nbit_phase-1 downto 0);
           sig : out  STD_LOGIC_VECTOR (Nbit_sine-1 downto 0));
end NCO;

architecture NCO_a of NCO is

    COMPONENT sin_LUT
		 GENERIC(	
				Nbit_phase : integer	:= 10;
				Nbit_sine : integer 	:= 16);
		 PORT(
				rst : IN  std_logic;
				clk : IN  std_logic;
				phase : IN  std_logic_vector(Nbit_phase-1 downto 0);
				sine : OUT  std_logic_vector(Nbit_sine-1 downto 0)
			  );
    END COMPONENT;
	 
	 COMPONENT Phase_accumulator
	 GENERIC(Nbit_phase : integer := 10);
		 PORT(
				rst : IN  std_logic;
				clk : IN  std_logic;
				phase_mul : IN  std_logic_vector(Nbit_phase-1 downto 0);
				phase : OUT  std_logic_vector(Nbit_phase-1 downto 0)
			  );
		 END COMPONENT;
		 
		 
		constant c_Nbit_phase : integer := 3;
		constant c_Nbit_sine : integer := 3;
		
		signal phase : std_logic_vector(c_Nbit_phase-1 downto 0);		
		
begin
	Lookup_table : sin_LUT 
		generic map(Nbit_phase => c_Nbit_phase, Nbit_sine => c_Nbit_sine)
		port map(rst => rst, clk => clk, phase => phase, sine => sig);
		
	pha : Phase_accumulator
		generic map(Nbit_phase => c_Nbit_phase)
		port map(rst => rst, clk => clk, phase_mul => mul, phase => phase);

end NCO_a;

