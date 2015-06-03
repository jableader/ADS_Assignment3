LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE work.CommonUnits.ALL;
 
ENTITY TestSevenSegmentDisplayGroup IS
END TestSevenSegmentDisplayGroup;
 
ARCHITECTURE behavior OF TestSevenSegmentDisplayGroup IS 

   --Inputs
   signal clock : std_logic := '0';
   signal values : ssdBank := (others => ("0000", '0'));

 	--Outputs
   signal segmentSelect : std_logic_vector(0 to 7);
   signal unitSelect : std_logic_vector(0 to 5);

   -- Clock period definitions
   constant clock_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: entity work.SevenSegmentDisplayGroup PORT MAP (
          clock => clock,
          values => values,
          segmentSelect => segmentSelect,
          unitSelect => unitSelect
        );

   -- Clock process definitions
   clock_process :process
   begin
		clock <= '0';
		wait for clock_period/2;
		clock <= '1';
		wait for clock_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
		values(0) <= ("0000", '0');
		values(1) <= ("0001", '1');
		values(2) <= ("0010", '0');
		values(3) <= ("0011", '1');
		values(4) <= ("0100", '0');
		values(5) <= ("0101", '1');
		
      wait;
   end process;

END;
