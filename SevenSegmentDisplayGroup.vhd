library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
use work.CommonUnits.ALL;

entity SevenSegmentDisplayGroup is
	port (
		clock : in std_logic;
		values : in ssdBank;
		segmentSelect : out std_logic_vector(0 to 7);
		unitSelect: out std_logic_vector(0 to 5)
	);
end SevenSegmentDisplayGroup;

architecture Behavioral of SevenSegmentDisplayGroup is
	signal display : ssdDigit;
	signal itemToUse : natural range 0 to 5 := 0;
begin
	process (clock)
	begin
		if rising_edge(clock) then
			if itemToUse = 5 then
				itemToUse <= 0;
			else
				itemToUse <= itemToUse + 1;
			end if;
		end if;
	end process;
	
	display <= values(itemToUse);
	
	bcdToSSD: entity work.BCD_To_SSD port map (display, segmentSelect);
	
	with itemToUse select unitSelect <=
		"100000" when 0,
		"010000" when 1,
		"001000" when 2,
		"000100" when 3,
		"000010" when 4,
		"000001" when others;
	
end Behavioral;

