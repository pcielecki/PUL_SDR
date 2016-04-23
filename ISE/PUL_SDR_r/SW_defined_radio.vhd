----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    20:34:12 04/09/2016 
-- Design Name: 
-- Module Name:    demodulator - dem_a 
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

entity demodulator is
	Generic(sample_in_Nbit : integer := 16;
				sample_out_Nbit : integer := 16
				);
    Port ( rst : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           hf_in : in  STD_LOGIC_VECTOR (sample_in_Nbit-1 downto 0);
           audio_out : out  STD_LOGIC_VECTOR (sample_out_Nbit-1 downto 0)
			  );
end demodulator;

architecture dem_a of demodulator is

	
begin		

end dem_a;

