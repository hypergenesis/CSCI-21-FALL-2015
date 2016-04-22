#creates the executable from both the object files
lab20test: lab_20_unit_test.o lab_20.o
	g++ -Wall -g -o lab20test lab_20.o lab_20_unit_test.o
	
#creates the lab20 object file
lab20: lab_20.cpp lab_20.h
	g++ -Wall -g -c lab_20.cpp
	
#creates the unit test object file
lab_20_unit_test: lab_20_unit_test.cpp
	g++ -Wall -g -c lab_20_unit_test.cpp