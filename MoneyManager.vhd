library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity SumManager is
	port (
		reset, addToSum : in std_logic;
		amountToAdd : in unsigned(3 downto 0);
		total : out unsigned(3 downto 0)
	);
end SumManager;

architecture Behavioral of SumManager is
	signal sum : unsigned(3 downto 0) := (others => '0');
begin
	process (addToSum, reset)
	begin
		if reset = '1' then
			sum <= "0000";
		elsif rising_edge(addToSum) then
			sum <= sum + amountToAdd;
		end if;
	end process;
	
	total <= sum;
end Behavioral;

