library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
use work.CommonUnits.ALL;

entity CoinAcceptor is
	Port (
		clock : in std_logic;
		coins : in std_logic_vector(0 to 5);
		coinIsInserted : out std_logic;
		isAccepted : out std_logic;
		tensValue, onesValue : out unsigned(3 downto 0);
		isDollar : out std_logic
	);
end CoinAcceptor;

architecture Behavioral of CoinAcceptor is
	signal debouncedCoins : std_logic_vector(0 to 5) := (others => '0');
begin
	debouncers: for i in coins'range generate
		-- Invert the coins here to counter act the inverse issue
		c1: entity debounce port map (Clock, not coins(i), debouncedCoins(i));
	end generate;
	
	isDollar <= debouncedCoins(0) or debouncedCoins(1);
	isAccepted <= debouncedCoins(2) or debouncedCoins(3) or debouncedCoins(4);
	coinIsInserted <= or_reduce(debouncedCoins);
	
	with debouncedCoins select tensValue <=
		"0101" when "001000", -- 50c
		"0010" when "000100", -- 20c
		"0001" when "000010", -- 10c
		"0000" when others;
	 
	 with debouncedCoins select onesValue <=
		"0010" when "100000", -- $2
		"0001" when "010000", -- $1
		"0101" when "000001", --  5c
		"0000" when others;
end Behavioral;

