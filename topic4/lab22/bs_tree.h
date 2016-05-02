
#ifndef LAB_H
#define LAB_H

#include <iostream>
using namespace std;

class BSTree
{
    private:
    bool Insert(int contents, BSTNode*& new_node)//creates a new BSTNode, inserts it into the tree, and returns true if the integer is already in the tree, does not insert, and returns false
    {
        if (new_node == NULL))
        {
            
        }
    };
    void Clear(BSTNode*& root)//clears the entire contents of the tree, freeing all memory associated with all nodes
    {
        
    };
    string InOrder(BSTNode* root)//creates a string of the data in all nodes in the tree, in ascending order separate by spaces (there should be a space after the last output value)
    {
        
    };
    BSTNode* root_;//points to the root node of a binary search tree
    unsigned int size;//holds the number of nodes in the tree
    
    public:
    BSTree();//constructor
    ~BSTree();//deconstructor
    bool Insert(int contents);//calls private Insert
    void Clear();//calls private Clear
    unsigned int size() const;//accessor for size
    string InOrder();//calls private InSize
    
};

#endif