#creates the executable from both the object files
lab22test: lab_22_unit_test.o bst_node.o bs_tree.o
	g++ -Wall -g -o lab22test bst_node.o bs_tree.o lab_22_unit_test.o
	
#creates the lab22 object file
lab22: bst_node.cpp bst_node.h bs_tree.cpp bst_node.h
	g++ -Wall -g -c bst_node.cpp bs_tree.cpp
	
#creates the unit test object file
lab_22_unit_test: lab_22_unit_test.cpp
	g++ -Wall -g -c lab_22_unit_test.cpp