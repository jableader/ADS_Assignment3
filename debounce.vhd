library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use work.CommonUnits.ALL;

entity oneSecondLatch is
	generic (
		latchSize : positive
	);
	
	port (
		Clock : in std_logic;
		Inputs : in std_logic_vector(0 to latchSize);
		Outputs : out std_logic_vector(0 to latchSize);
	);
end entity;

entity debounce is
    Port ( Clock : in  STD_LOGIC;
           Input : in  STD_LOGIC;
           Output : out  STD_LOGIC);
end debounce;

architecture Behavioral of debounce is
	signal inBuffer : std_logic_vector(2 downto 0) := (others => '0');
begin
	process (Clock)
	begin
		if rising_edge(Clock) then
			inBuffer <= (inBuffer(1), inBuffer(0), Input);
		end if;
	end process;
	
	Output <= inBuffer(2) and inBuffer(1) and inBuffer(0);
end Behavioral;