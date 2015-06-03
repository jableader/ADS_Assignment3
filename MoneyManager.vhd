library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity SumManager is
	port (
		Clock, reset, addToSum : in std_logic;
		amountToAdd : in unsigned(3 downto 0);
		total : out unsigned(3 downto 0)
	);
end SumManager;

architecture Behavioral of SumManager is
	signal sum : unsigned(3 downto 0) := (others => '0');
	signal hasBeenAdded : std_logic := '0';
begin
	process (Clock, reset)
	begin
		if reset = '1' then
			sum <= "0000";
			hasBeenAdded <= '0';
		elsif rising_edge(clock) then
			if hasBeenAdded = '0' and addToSum = '1' then
				sum <= sum + amountToAdd;
				hasBeenAdded <= '1';
			elsif addToSum = '0' then
				hasBeenAdded <= '0';
			end if;
		end if;
	end process;
	
	total <= sum;
end Behavioral;

