
-- VHDL Instantiation Created from source file TopLevel.vhd -- 13:03:26 05/30/2015
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT TopLevel
	PORT(
		clock : IN std_logic;
		buttons : IN std_logic_vector(0 to 5);          
		ssdSegmentSelect : OUT std_logic_vector(0 to 7);
		ssdUnitSelect : OUT std_logic_vector(0 to 5)
		);
	END COMPONENT;

	Inst_TopLevel: TopLevel PORT MAP(
		clock => ,
		buttons => ,
		ssdSegmentSelect => ,
		ssdUnitSelect => 
	);


