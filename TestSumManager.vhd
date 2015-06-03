LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

ENTITY TestSumManager IS
END TestSumManager;
 
ARCHITECTURE behavior OF TestSumManager IS 
 
   --Inputs
   signal reset, clock : std_logic := '0';
   signal addToSum : std_logic := '0';
   signal amountToAdd : unsigned(3 downto 0) := (others => '0');

 	--Outputs
   signal total : unsigned(3 downto 0);
 
   constant clock_period : time := 100 ns;
BEGIN
	 -- Clock process definitions
   clock_process :process
   begin
		clock <= '0';
		wait for clock_period/2;
		clock <= '1';
		wait for clock_period/2;
   end process;
 
 
	-- Instantiate the Unit Under Test (UUT)
   uut: entity work.SumManager PORT MAP (
			 clock => clock,
          reset => reset,
          addToSum => addToSum,
          amountToAdd => amountToAdd,
          total => total
        );

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 1 ms.
      wait for 1 ms;	
		
		amountToAdd <= "0001";
		
		for i in 0 to 3 loop
			wait for 1 ms;
			addToSum <= not addToSum;
		end loop;
		
		wait for 1 ms;

		reset <= '1';
		wait for 1 ms;
		reset <= '0';
		wait for 1 ms;
		
		amountToAdd <= "0000";

		addToSum <= '1';
		wait for 1 ms;
		
		addToSum <= '0';
		wait for 1 ms;
		
		amountToAdd <= "0011";
		addToSum <= '1'; 
		wait for 1 ms;
		
		addToSum <= '0';
		wait for 1 ms;
		
		for i in 0 to 3 loop
			addToSum <= not addToSum;
			wait for 1 ms;
		end loop;
		
		wait;
   end process;

END;
