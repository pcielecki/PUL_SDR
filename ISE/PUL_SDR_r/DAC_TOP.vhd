-----------------------------------------------------------------------------------------
-- Plik gwny projektu DAC_TOP.vhd
-- Materiay pomocnicze: Programowanie Ukadw Logicznych 
-- Obsuga przetwornika DAC LTC2624 (Quad 12 bit DAC) Spartan-3E Starter Kit 
-- tryb obsugi 32 bitowa ramka danych 
-- zmina wartoci sowa sygnau "pattern" umozliwia zmian napicia wyjciowego przetwornika DAC
-----------------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;


entity DAC_TOP is
	Generic(SPI_SPEED: integer := 4);
    Port ( CLK : in  STD_LOGIC;
           RST : in  STD_LOGIC;
           DAC_MOSI : out  STD_LOGIC;
           DAC_CLR : out  STD_LOGIC;
           DAC_SCK : out  STD_LOGIC;
           DAC_CS : out  STD_LOGIC;
			  DAC_outval : in std_logic_vector(11 downto 0)
		   );
end DAC_TOP;

architecture DAC of DAC_TOP is
signal rdy,daccs,dacsck,dacmosi : std_logic;
signal command : std_logic_vector(3 downto 0);
signal address : std_logic_vector(3 downto 0);
signal dacdata : std_logic_vector(31 downto 0);

	component DAC_Control
    Port (	CLK 		: in  STD_LOGIC;
			RST 		: in  STD_LOGIC;
			DAC_DATA 	: in STD_LOGIC_VECTOR(31 downto 0);
			DAC_MOSI 	: out  STD_LOGIC;
			DAC_SCK 	: out  STD_LOGIC;
			DAC_CS 		: out  STD_LOGIC;
			RDY 		: out  STD_LOGIC
			);
	end component;
	
		
	component clk_prescaler is
		Generic (Nbit : integer := 10);
		 Port ( clk : in  STD_LOGIC;
				  rst : in  STD_LOGIC;
				  clk_out : out  STD_LOGIC);
	end component clk_prescaler;
	
	signal dac_clk : std_logic;

begin

	U1 : DAC_Control
	Port map ( CLK => dac_clk,
				  RST => RST,
				  DAC_MOSI => dacmosi,
				  DAC_SCK => dacsck,
				  DAC_CS => daccs,
				  RDY => RDY,
				  DAC_DATA => dacdata
);

	presc: clk_prescaler generic map(Nbit => SPI_SPEED)
								port map(clk=>clk,
											rst => rst,
											clk_out=>dac_clk
											);
											

process(RST,CLK,daccs,dacsck,dacmosi)
	begin
		if (RST='0') then
			DAC_MOSI <= '0';
			DAC_CLR <= '0';
			DAC_SCK <= '0';
			DAC_CS <= '1';
		elsif rising_edge(CLK) then
			if rdy = '1' then 										-- flaga informujca o gotowoci ukadu
				command <= "0011";									-- polecenie 4-bity
				address <= "1111";									-- adres przetwornika 4-bity							
				dacdata(31 downto 24) <= (others => '0');		-- bity nieznaczce (nota katalogowa lub wykad)
				dacdata(23 downto 20) <= command;
				dacdata(19 downto 16) <= address;
				dacdata(15 downto 4) <= DAC_outval;
				dacdata(3 downto 0) <= (others => '0');		-- bity nieznaczce (nota katalogowa lub wykad)
			end if;
			DAC_CLR <= '1';
		end if;
		DAC_CS <= daccs;
		DAC_SCK <= dacsck;
		DAC_MOSI <= dacmosi;
end process;
end DAC;

