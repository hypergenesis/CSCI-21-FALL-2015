/*
River Roseveare-Hunt
Header file for Node class
*/

#ifndef LAB_H
#define LAB_H

#include <iostream>
using namespace std;

class DLNode
{
    private:
    
    //points to next node in list
    DLNode * next_node_;
    //Points to next node
    DLNode* previous_node_;
    //stores the data of the Node
    int contents_;
    
    public:
    
    //constructor
    DLNode();
    //overloaded constructor
    DLNode(int parameter);
    //destructor
    ~DLNode();
    //setters
    void set_contents(int contents);
    void set_next_node(DLNode*);
    void set_previous_node(DLNode*);
    //getters
    int contents() const;
    DLNode * next_node() const;
    DLNode * previous_node() const;
};

#endif