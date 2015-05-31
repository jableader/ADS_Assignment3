library IEEE;
use IEEE.STD_LOGIC_1164.all;
use IEEE.NUMERIC_STD.ALL;

package CommonUnits is

type ssdDigit is 
record
	bcdValue : unsigned(3 downto 0);
	decimalPoint : std_logic;
end record;

type ssdBank is array (0 to 5) of ssdDigit;

function or_reduce(d: std_logic_vector) return std_logic;
function and_reduce(d: std_logic_vector) return std_logic;

end CommonUnits;

package body CommonUnits is

function or_reduce(d: std_logic_vector) return std_logic is
	constant zeros : std_logic_vector(d'range) := (others => '0');
begin
	if d = zeros then
		return '0';
	else
		return '1';
	end if;
end or_reduce;

function and_reduce(d: std_logic_vector) return std_logic is
	constant ones : std_logic_vector(d'range) := (others => '1');
begin
	if d = ones then
		return '1';
	else
		return '0';
	end if;
end and_reduce;
 
end CommonUnits;
