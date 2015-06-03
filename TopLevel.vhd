library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
use work.CommonUnits.ALL;

entity TopLevel is
	port (
		clock, reset: in std_logic;
		buttons : in std_logic_vector(0 to 5);
		readyForInput : out std_logic;
		ssdSegmentSelect : out std_logic_vector(0 to 7);
		ssdUnitSelect : out std_logic_vector(0 to 5);
		wasOverflow : out std_logic := '0';
		moreNeeded : out std_logic := '1'
	);
end TopLevel;

architecture Behavioral of TopLevel is
	signal inverseButtons : std_logic_vector(0 to 5);
	signal display : ssdBank;
	signal ready, coinWasAccepted, coinWasDollar, inverseReset : std_logic := '0';
	signal icOnes, icTens : unsigned(3 downto 0);
	signal remainingTens, totalTensSoFar : unsigned(3 downto 0);
	signal resetAggregate, needsReset : std_logic := '0';
	signal changeAmount : unsigned(3 downto 0) := (others => '0');
begin
	inverseButtons <= not buttons; -- DSX buttons use inverse logic
	inverseReset <= not reset;
	
	coinAcc: entity work.CoinAcceptor port map (
			Clock => Clock, 
			Reset =>inverseReset,
			coins => inverseButtons, 
			readyForNewCoin => ready, 
			isAccepted => coinWasAccepted, 
			tensValue => icTens, 
			onesValue => icOnes,
			isDollar => coinWasDollar
		);
	
	resetAggregate <= inverseReset or needsReset;
	sumMgr: entity work.SumManager port map (
			Clock => Clock, 
			reset => resetAggregate,
			addToSum => coinWasAccepted,
			amountToAdd => icTens,
			total => totalTensSoFar
		);
	
	ssd: entity work.SevenSegmentDisplayGroup port map (Clock, display, ssdSegmentSelect, ssdUnitSelect);
	
	readyForInput <= not ready; -- LEDS also have inverse logic
	
	display(0).bcdValue <= icTens when ready = '0' else totalTensSoFar;
	display(0).decimalPoint <= '0';
	display(1) <= (icOnes, coinWasDollar);
	
	remainingTens <= "0000" when totalTensSoFar > "0100" else "0100" - totalTensSoFar;
	display(2) <= (remainingTens, '0');
	display(3) <= ("0000", '0');
	
	remainingTens <= "0000" when totalTensSoFar > "0100" else "0100" - totalTensSoFar;
	display(4).bcdValue <= "0000" when totalTensSoFar < "0100" else totalTensSoFar - "0100";
	display(4).decimalPoint <= '0';
	
	display(5) <= ("0000", '0');

	wasOverflow <= '0' when totalTensSoFar > "0100" else '1';
	moreNeeded <= '0' when totalTensSoFar < "0100" else '1';

	process (Clock)
	begin
		if rising_edge(Clock) then
			if totalTensSoFar >= "0100" and ready = '1' then
				needsReset <= '1';
			else
				needsReset <= '0';
			end if;
		end if;
	end process;

end Behavioral;

