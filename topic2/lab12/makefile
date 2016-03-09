#creates the executable from both the object files
lab12test: lab_12_unit_test.o item.o food_item.o magic_item.o
	g++ -Wall -g -o lab11stest item.o food_item.o magic_item.o lab_12_unit_test.o
	
#creates the unit test object file
lab_12_unit_test: lab_12_unit_test.cpp
	g++ -Wall -g -c lab_12_unit_test.cpp
	
#creates the lab11 object file
item: item.cpp item.h
	g++ -Wall -g -c item.cpp

#creates the lab11 object file
food_item: food_item.cpp food_item.h
	g++ -Wall -g -c food_item.cpp

#creates the lab11 object file
magic_item: magic_item.cpp magic_item.h
	g++ -Wall -g -c magic_item.cpp