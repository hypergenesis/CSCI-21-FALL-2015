
#ifndef BST_H
#define BST_H

#include "bst_node.h"
#include <iostream>
using namespace std;

class BSTree
{
    private:

    bool Insert(int contents, BSTNode*& new_node);//creates a new BSTNode, inserts it into the tree, and returns true if the integer is already in the tree, does not insert, and returns false
    void Clear(BSTNode*& root);//clears the entire contents of the tree, freeing all memory associated with all nodes
    string InOrder(BSTNode* root);//creates a string of the data in all nodes in the tree, in ascending order separate by spaces (there should be a space after the last output value)
    
    bool Remove(int, BSTNode*&);//traverses the tree and removes the node containing the target
    int FindMin(BSTNode*) const;//returns the value of the smallest node in the tree
    
    BSTNode* root_;//points to the root node of a binary search tree
    unsigned int size_;//holds the number of nodes in the tree
    
    public:
    bool Remove(int);//returns value returned by private function Remove(int, root)
    int FindMin();//if the tree is empty return 0 otherwise return the value returned by private function
    BSTree();//constructor
    ~BSTree();//deconstructor
    bool Insert(int);//calls private Insert
    void Clear();//calls private Clear
    unsigned int size() const;//accessor for size
    string InOrder();//calls private InOrder
};

#endif