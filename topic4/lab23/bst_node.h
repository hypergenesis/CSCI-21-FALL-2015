
#ifndef BSN_H
#define BSN_H

#include <sstream>
#include <iostream>
using namespace std;

class BSTNode
{
    private:
    
    BSTNode * left_child_;//points to left child
    BSTNode * right_child_;//points to right child
    int contents_;//contains the contents
    
    public:
    BSTNode();//constructors
    BSTNode(int contents);
    ~BSTNode();//deconstructor
    
    void set_contents(int contents);//sets contents
    int contents() const;//gets contents
    int& contents();
    
    void set_left_child(BSTNode* new_left);//sets left pointer
    void set_right_child(BSTNode* new_right);//sets right pointer
    
    BSTNode* left_child() const;//get left child
    BSTNode*& left_child();
    
    BSTNode* right_child() const;//get right child
    BSTNode*& right_child();
};

#endif