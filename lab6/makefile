#creates the executable from both the obhect files
lab6test: lab_6_unit_test.o lab_6.o
	g++ -Wall -g -o lab6test lab_6.o lab_6_unit_test.o
	
#creates tje lab6 obhect files
lab6: lab_6.cpp lab_6.h
	g++ -Wall -g -c lab_6.cpp
	
#creates the unit test object files
lab_6_unit_test: lab_6_unit_test.cpp
	g++ -Wall -g -c lab_6_unit_test.cpp.