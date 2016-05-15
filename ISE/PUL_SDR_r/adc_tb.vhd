--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   15:01:21 05/13/2016
-- Design Name:   
-- Module Name:   /home/piotr/workspace/PUL/PUL_SDR/ISE/PUL_SDR_r/adc_tb.vhd
-- Project Name:  PUL_SDR_r
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: ADC_TOP
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY adc_tb IS
END adc_tb;
 
ARCHITECTURE behavior OF adc_tb IS 
 
 constant Nbit : integer := 12;
    -- Component Declaration for the Unit Under Test (UUT)
 
component ADC_TOP is
	Generic(Nbit : integer := 12;
				ADC_speed : integer range 0 to 2**4 - 1);
    Port ( rst : in  STD_LOGIC;
           clk : in  STD_LOGIC;
			  start_conv : in std_logic;
           SPI_SCK : out  STD_LOGIC;
           SPI_MISO : in  STD_LOGIC;
           AD_CONV : out  STD_LOGIC;
           ADC_dataout : out  STD_LOGIC_VECTOR(2*Nbit-1 downto 0));
end component ADC_TOP;
    
	signal useless : std_logic := '0';
   --Inputs
   signal rst : std_logic := '0';
   signal clk : std_logic := '0';
   signal start_conv : std_logic := '0';
   signal SPI_MISO : std_logic := '1';

 	--Outputs
   signal SPI_SCK : std_logic;
   signal AD_CONV : std_logic;
   signal ADC_dataout : std_logic_vector(2*Nbit-1 downto 0);

   -- Clock period definitions
   constant clk_period : time := 1	 ns;
	constant sample_data : std_logic_vector(0 to 2*Nbit - 1) := 
		"001111111110110101010101";
		
		signal ctr : integer := 0;
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: ADC_TOP generic map(Nbit, 1)	PORT MAP (
          rst => rst,
          clk => clk,
          start_conv => start_conv,
          SPI_SCK => SPI_SCK,
          SPI_MISO => SPI_MISO,
          AD_CONV => AD_CONV,
          ADC_dataout => ADC_dataout
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
		wait for 2*clk_period;
		
		rst <= '1';
		wait for 10*clk_period;
		
		start_conv <= '1';
		wait for 5*clk_period;
		
		start_conv <= '0';
		wait for 500*clk_period;
		
		start_conv <= '1';
		wait ;
		
		
   end process;

	conv_process : process(rst, AD_CONV, SPI_SCK) is
	variable data_ctr : integer := 0;
	begin
	
		if(rst = '0' or AD_CONV = '1') then data_ctr := 0;ctr <= 0;
		elsif(SPI_SCK'event and SPI_SCK = '0' and data_ctr < 2*Nbit) then
			if(ctr > 1 and (ctr < Nbit + 2 or ctr > Nbit + 3))	then
				SPI_MISO <= sample_data(data_ctr);
				data_ctr := data_ctr + 1;	
			else
				SPI_MISO <= 'Z';
			end if;
			ctr <= ctr + 1;	

		end if;
	
	end process conv_process;

END;
