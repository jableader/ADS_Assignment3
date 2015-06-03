LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY TestDebounce IS
END TestDebounce;
 
ARCHITECTURE behavior OF TestDebounce IS 
 
    COMPONENT threeSecondLatch
    PORT(
         Clock : IN  std_logic;
         Reset : IN  std_logic;
         Inputs : IN  std_logic_vector(0 to 1);
         Ready : OUT  std_logic;
         Outputs : OUT  std_logic_vector(0 to 1)
        );
    END COMPONENT;
    
   --Inputs
   signal Clock : std_logic := '0';
   signal Reset : std_logic := '0';
   signal Inputs : std_logic_vector(0 to 1) := (others => '0');

 	--Outputs
   signal Ready : std_logic;
   signal Outputs : std_logic_vector(0 to 1);

   -- Clock period definitions
   constant Clock_period : time := 1 ms;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: threeSecondLatch PORT MAP (
          Clock => Clock,
          Reset => Reset,
          Inputs => Inputs,
          Ready => Ready,
          Outputs => Outputs
        );

   Clock_process :process
   begin
		Clock <= '0';
		wait for Clock_period/2;
		Clock <= '1';
		wait for Clock_period/2;
   end process;
 
   stim_proc: process
   begin		
      wait for 100 ns;	
		
		

      wait;
   end process;

END;
