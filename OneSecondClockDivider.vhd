library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity OneSecondClockDivider is
    Port ( Clock : in  STD_LOGIC;
           SlowClock : buffer  STD_LOGIC);
end OneSecondClockDivider;

architecture Behavioral of OneSecondClockDivider is
	constant halfFrequency : integer := 99;
	signal count : natural range 0 to halfFrequency := 0;
begin
	process (Clock)
	begin
		if rising_edge(Clock) then
			count <= count + 1;
			if count = halfFrequency then
				SlowClock <= not SlowClock;
			end if;
		end if;
	end process;
end Behavioral;

