#creates the executable from both the object files
lab10test: lab_10_unit_test.o temperature.o
	g++ -Wall -g -o lab10test temperature.o lab_10_unit_test.o
	
#creates the lab10 object file
lab10: temperature.cpp temperature.h
	g++ -Wall -g -c temperature.cpp
	
#creates the unit test object file
lab_10_unit_test: lab_10_unit_test.cpp
	g++ -Wall -g -c lab_10_unit_test.cpp
