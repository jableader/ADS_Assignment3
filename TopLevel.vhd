library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
use work.CommonUnits.ALL;

entity TopLevel is
	port (
		clock, reset : in std_logic;
		buttons : in std_logic_vector(0 to 5);
		ssdSegmentSelect : out std_logic_vector(0 to 7);
		ssdUnitSelect : out std_logic_vector(0 to 5)
	);
end TopLevel;

architecture Behavioral of TopLevel is
	signal display : ssdBank;
	signal coinWasAdded, coinWasAccepted, coinWasDollar : std_logic;
	signal icOnes, icTens : unsigned(3 downto 0);
	signal remainingTens, totalTensSoFar : unsigned(3 downto 0);
begin
	c1: entity work.CoinAcceptor port map (Clock, buttons, coinWasAdded, coinWasAccepted, icTens, icOnes, coinWasDollar);
	c2: entity work.SumManager port map (not reset, coinWasAccepted, icTens, totalTensSoFar);
	c3: entity work.SevenSegmentDisplayGroup port map (Clock, display, ssdSegmentSelect, ssdUnitSelect);
	
	display(0) <= (icTens, '0');
	display(1) <= (icOnes, coinWasDollar);
	
	display(2) <= (totalTensSoFar, '0');
	display(3) <= ("0000", '0');
	
end Behavioral;
