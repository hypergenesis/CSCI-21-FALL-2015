#creates the executable from both the object files
lab16test: lab_16_unit_test.o sl_node.o sl_list.o
	g++ -Wall -g -o lab16test sl_node.o sl_list.o lab_16_unit_test.o
	
#creates the lab16 object file
lab16: sl_node.cpp sl_node.h sl_list.cpp sl_node.h
	g++ -Wall -g -c sl_node.cpp sl_list.cpp
	
#creates the unit test object file
lab_16_unit_test: lab_16_unit_test.cpp
	g++ -Wall -g -c lab_16_unit_test.cpp