#creates the executable from both the object files
assignment3test: assignment_3_unit_test.o Box.o Prize.o
	g++ -Wall -g -o assignment3test Box.o Prize.o assignment_3_unit_test.o
	
#creates the Box object file
Box: Box.cpp Box.h
	g++ -Wall -g -c Box.cpp
	
#creates the Prize object file
Prize: Prize.cpp Prize.h
	g++ -Wall -g -c Prize.cpp
	
#creates the unit test object file
assignment_3_unit_test: assignment_3_unit_test.cpp
	g++ -Wall -g -c assignment_3_unit_test.cpp