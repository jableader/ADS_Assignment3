library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity SumManager is
	port (
		reset, addToSum : in std_logic;
		amountToAdd : in unsigned(3 downto 0);
		total : buffer unsigned(3 downto 0)
	);
end SumManager;

architecture Behavioral of SumManager is
begin
	process (addToSum, reset)
	begin
		if reset = '1' then
			total <= "0000";
		elsif rising_edge(addToSum) then
			total <= total + amountToAdd;
		end if;
	end process;
end Behavioral;

