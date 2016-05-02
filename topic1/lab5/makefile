#creates the executable from both the obhect files
lab5test: lab_5_unit_test.o lab_5.o
	g++ -Wall -g -o lab5test lab_5.o lab_5_unit_test.o
	
#creates tje lab4 obhect files
lab5: lab_5.cpp lab_5.h
	g++ -Wall -g -c lab_5.cpp
	
#creates the unit test object files
lab_5_unit_test: lab_5_unit_test.cpp
	g++ -Wall -g -c lab_5_unit_test.cpp.