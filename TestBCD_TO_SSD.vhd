LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE work.CommonUnits.ALL;

ENTITY TestBCD_TO_SSD IS
END TestBCD_TO_SSD;
 
ARCHITECTURE behavior OF TestBCD_TO_SSD IS 
   signal unit : ssdDigit := ("0000", '0');
   signal Output : std_logic_vector(0 to 7);
BEGIN
   uut: entity work.BCD_to_SSD PORT MAP (
          Input => unit,
          Output => Output
        );

   -- Stimulus process
   stim_proc: process
   begin		
      wait for 100 ns;	
		unit <= ("0101", '0');
      wait for 100 ns;	
		unit <= ("0011", '1');
      wait for 100 ns;	
		unit <= ("0001", '0');
      wait;
   end process;

END;
