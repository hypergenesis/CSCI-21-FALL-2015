#creates the executable from both the obhect files
lab4test: lab_4_unit_test.o lab_4.o
	g++ -Wall -g -o lab4test lab_4.o lab_4_unit_test.o
	
#creates tje lab4 obhect files
lab4: lab_4.cpp lab_4.h
	g++ -Wall -g -c lab_4.cpp
	
#creates the unit test object files
lab_4_unit_test: lab_4_unit_test.cpp
	g++ -Wall -g -c lab_4_unit_test.cpp.