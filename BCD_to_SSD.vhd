library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
use work.CommonUnits.ALL;

entity BCD_to_SSD is
	Port (
		Input : in ssdDigit;
		Output : out  STD_LOGIC_VECTOR (0 to 7)
	);
end BCD_to_SSD;

architecture Behavioral of BCD_to_SSD is
	signal outputSegments : std_logic_vector(0 to 6);
begin
	with Input.bcdValue select outputSegments <=
		"1111110" when "0000",
		"0110000" when "0001",
		"1101101" when "0010",
		"1111001" when "0011",
		"0110011" when "0100",
		"1011011" when "0101",
		"1011111" when "0110",
		"1110000" when "0111",
		"1111111" when "1000",
		"1111011" when others;
	
	Output <= outputSegments & Input.decimalPoint;
end Behavioral;

