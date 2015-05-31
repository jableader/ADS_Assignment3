LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.NUMERIC_STD.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY TestCoinAcceptor IS
END TestCoinAcceptor;
 
ARCHITECTURE behavior OF TestCoinAcceptor IS 
   --Inputs
   signal clock : std_logic := '0';
   signal coins : std_logic_vector(0 to 5) := "100000";

 	--Outputs
   signal readyForNewCoin : std_logic;
   signal isAccepted : std_logic;
   signal tensValue : unsigned(3 downto 0);
   signal onesValue : unsigned(3 downto 0);
   signal isDollar : std_logic;

   -- Clock period definitions
   constant clock_period : time := 1 ms;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT) 
   uut: entity work.CoinAcceptor PORT MAP (
          clock => clock,
          coins => coins,
          readyForNewCoin => readyForNewCoin,
          isAccepted => isAccepted,
          tensValue => tensValue,
          onesValue => onesValue,
          isDollar => isDollar
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

		for i in 0 to 6 loop
			wait until readyForNewCoin ='1';
			wait for 100 ns;
			coins <= "0" & coins(0 to coins'HIGH-1);
		end loop;
		
      wait;
   end process;

END;
