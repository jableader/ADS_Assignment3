library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
use work.CommonUnits.ALL;

entity CoinAcceptor is
	Port (
		clock : in std_logic;
		coins : in std_logic_vector(0 to 5);
		readyForNewCoin : out std_logic;
		isAccepted : out std_logic;
		tensValue, onesValue : out unsigned(3 downto 0);
		isDollar : out std_logic
	);
end CoinAcceptor;

architecture Behavioral of CoinAcceptor is
	signal debouncedCoins : std_logic_vector(0 to 5) := (others => '0');
	
	constant twoDollar	: integer := 0;
	constant oneDollar	: integer := 1;
	constant fiftyCent	: integer := 2;
	constant twentyCent	: integer := 3;
	constant tenCent		: integer := 4;
	constant fiveCent		: integer := 5;
begin
	debouncers : entity work.threeSecondLatch generic map (5) port map (clock, coins, readyForNewCoin, debouncedCoins);
	
	isDollar <= debouncedCoins(twoDollar) or debouncedCoins(oneDollar);
	isAccepted <= debouncedCoins(fiftyCent) or debouncedCoins(twentyCent) or debouncedCoins(tenCent);
	
	tensValue <= 
				"0101" when debouncedCoins(fiftyCent) 	= '1' else
				"0010" when debouncedCoins(twentyCent) = '1' else
				"0001" when debouncedCoins(tenCent) 	= '1' else
				"0000";
	
	onesValue <=
				"0010" when debouncedCoins(twoDollar) = '1' else
				"0001" when debouncedCoins(oneDollar) = '1' else
				"0101" when debouncedCoins(fiveCent) = '1' else
				"0000";
end Behavioral;

