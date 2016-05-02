    #include "bst_node.h"
    
    
    BSTNode::BSTNode()
    {
        contents_ = 0;
        left_child_ = NULL;
        right_child_ = NULL;
    }
    
    BSTNode::BSTNode(int contents)//overloaded constructor
    {
        contents_ = contents;
        left_child_ = NULL;
        right_child_ = NULL;
    }
    BSTNode::~BSTNode()//deconstructor
    {
        left_child_ = NULL;
        right_child_ = NULL;
    }
    
    void BSTNode::set_contents(int contents)//sets contents
    {
        contents_ = contents;
    }
    
    int BSTNode::contents() const//gets contents
    {
        return contents_;
    }
    int& BSTNode::contents()
    {
        return contents_;
    }
    
    void BSTNode::set_left_child(BSTNode* new_left)//sets left pointer
    {
        left_child_ = new_left;
    }
    
    void BSTNode::set_right_child(BSTNode* new_right)//sets right pointer
    {
        right_child_ = new_right;
    }
    
    BSTNode* BSTNode::left_child() const//get left child
    {
        return left_child_;
    }
    
    BSTNode*& BSTNode::left_child()
    {
        return left_child_;
    }
    
    BSTNode* BSTNode::right_child() const//get right child
    {
        return right_child_;
    }
    BSTNode*& BSTNode::right_child()
    {
        return right_child_;
    }