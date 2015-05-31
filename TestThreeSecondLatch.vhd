LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY TestThreeSecondLatch IS
END TestThreeSecondLatch;
 
ARCHITECTURE behavior OF TestThreeSecondLatch IS 
 
   --Inputs
   signal Clock : std_logic := '0';
   signal Inputs : std_logic_vector(0 to 1) := (others => '0');

 	--Outputs
   signal Outputs : std_logic_vector(0 to 1);

   -- Clock period definitions
   constant Clock_period : time := 1 ms;
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: entity work.threeSecondLatch generic map (1) PORT MAP (
          Clock => Clock,
          Inputs => Inputs,
          Outputs => Outputs
        );

   -- Clock process definitions
   Clock_process :process
   begin
		Clock <= '0';
		wait for Clock_period/2;
		Clock <= '1';
		wait for Clock_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	
		
      wait for Clock_period*10;

      -- insert stimulus here 
		
		Inputs(0) <= '1';
		
		wait for 10 ms;
		
		Inputs <= (others => '0');
		
      wait;
   end process;

END;
