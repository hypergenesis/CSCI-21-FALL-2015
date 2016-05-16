#creates the executable from both the object files
lab12test: lab_15_unit_test.o sorting.o
	g++ -Wall -g -o lab15test sorting.o lab_15_unit_test.o
	
#creates the sorting object file
sorting: sorting.cpp sorting.h
	g++ -Wall -g -c sorting.cpp
	
#creates the unit test object file
lab_15_unit_test: lab_15_unit_test.cpp
	g++ -Wall -g -c lab_15_unit_test.cpp
	
#cleans up old .o files	
clean:
	rm *.o *test 