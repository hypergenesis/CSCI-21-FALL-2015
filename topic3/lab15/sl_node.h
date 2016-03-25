/*
Class file for SLNode
*/

#ifndef LAB_H
#define LAB_H

#include <iostream>
using namespace std;

class SLNode
{
    private:
    
    //points to next node in list
    SLNode * next_node_;
    //stores the data of the Node
    int contents_;
    
    public:
    
    //constructor
    SLNode();
    //overloaded constructor
    SLNode(int parameter);
    //destructor
    ~SLNode();
    //setters
    void set_contents(int contents);
    void set_next_node(SLNode*);
    //getters
    int contents() const;
    SLNode * next_node() const;
};

#endif