#include "bs_tree.h"

BSTree::BSTree()//constructor
{
    root_ = NULL;
    size_ = 0;
}

BSTree::~BSTree()//deconstructor
{
    //clears whole tree
    Clear();
}

bool BSTree::Insert(int contents, BSTNode*& new_node)//creates a new BSTNode, inserts it into the tree, and returns true if the integer is already in the tree, does not insert, and returns false
{
    if (new_node == NULL)
    {
        //sets temp to new node;
        BSTNode * temp = new BSTNode(contents);
        //sets new_node to temp
        new_node = temp;
        //increases the size
        size_++;
        //returns true because successful
        return true;
    }
    else if (contents < (new_node -> contents()))
    {
        //calls function for left child
        Insert(contents, new_node -> left_child());
    }
    else if (contents > (new_node -> contents()))
    {
        //calls function for right child
        Insert(contents, new_node -> right_child());
    }
    else
    {
        //returns false if they are the same
        return false;
    }
}

void BSTree::Clear(BSTNode*& root)//clears the entire contents of the tree, freeing all memory associated with all nodes
{
    //if the tree is not already cleared
    if (root != NULL)
    {
        Clear(root->left_child());
        Clear(root->right_child());
        delete root;
        root = NULL;
        size_--;
    }
}

string BSTree::InOrder(BSTNode* root)//creates a string of the data in all nodes in the tree, in ascending order separate by spaces (there should be a space after the last output value)
{
    //creates ss to catch output
    stringstream output;
    //if certain values apply
    if (root == NULL)
    {
        output << "";
        return output.str();
    }
    //otherwise
    else
    {
        output << InOrder(root->left_child());
        output << root -> contents() << " ";
        output << InOrder(root->right_child());
        return output.str();
    }
    //return "dumb";
}

unsigned int BSTree::size() const//accessor for size
{
    return size_;
}

void BSTree::Clear()//calls clear on whole tree
{
    Clear(root_);
}

string BSTree::InOrder()//calls inorder on tree
{
    return InOrder(root_);
}

bool BSTree::Insert(int contents)
{
    return Insert(contents, root_);
}