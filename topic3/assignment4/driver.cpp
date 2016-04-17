
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

#include "dl_list.h"
#include "dl_list.cpp"
#include "dl_node.h"
#include "dl_node.cpp"
using namespace std;

int main()
{
    int head;
    
    int nok;
    int k;
    DLList list;
    ifstream inStream;
    inStream.open("a3input.txt");
    
    
    for(int i = 0; i < nok; i++)
    {
        inStream >> k;
        list.Insert(k);
    }
    
    head = list.GetHead();
    inStream.close();
    return 0;
}
