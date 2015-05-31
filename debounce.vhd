library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use work.CommonUnits.ALL;

entity threeSecondLatch is
	generic (
		latchSize : positive := 1
	);
	
	port (
		Clock : in std_logic;
		Inputs : in std_logic_vector(0 to latchSize);
		Outputs : out std_logic_vector(0 to latchSize) := (others => '0')
	);
end entity;

architecture Behavoural of threeSecondLatch is
	signal isActive : std_logic := '0';
	signal count : natural range 0 to 3000;
begin	
	process (Clock)
	begin
		if or_reduce(Inputs) /= '0' and isActive = '0' then
			Outputs <= Inputs;
			count <= 0;
			isActive <= '1';
		elsif rising_edge(Clock) then
			if Count = 3000 then
				Outputs <= (others => '0');
				Count <= 0;
				isActive <= '0';
			else
				Count <= Count + 1;
			end if;
		end if;
	end process;
end;