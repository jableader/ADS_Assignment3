LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY TestTopLevel IS
END TestTopLevel;
 
ARCHITECTURE behavior OF TestTopLevel IS 
 
    --Inputs
   signal clock : std_logic := '0';
   signal reset : std_logic := '1';
   signal buttons : std_logic_vector(0 to 5) := (others => '1');

 	--Outputs
   signal ssdSegmentSelect : std_logic_vector(0 to 7);
   signal ssdUnitSelect : std_logic_vector(0 to 5);
	signal ready : std_logic;
	
   -- Clock period definitions
   constant clock_period : time := 1 ms;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: entity work.TopLevel PORT MAP (
          clock => clock,
          reset => reset,
			 readyForInput => ready,
          buttons => buttons,
          ssdSegmentSelect => ssdSegmentSelect,
          ssdUnitSelect => ssdUnitSelect
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
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clock_period*10;
		
		for i in 0 to 2 loop
			if ready /= '0' then
				wait until ready = '0';
			end if;
		
			buttons(i) <= '0';
			wait for 100 ms;
			
			buttons(i) <= '1';
		end loop;
		
		for i in 2 to 5 loop
			if ready /= '0' then
				wait until ready = '0';
			end if;
			
			buttons(i) <= '0';
			wait for 100 ms;
			
			buttons(i) <= '1';
		end loop;
      wait;
   end process;

END;
