#include "dl_node.h"
//constructor
DLNode::DLNode()
{
    DLNode * next_node_ = NULL;
    contents_ = 0;
}
//alt constructor (overloaded)
DLNode::DLNode(int parameter)
{
    contents_ = parameter;
    next_node_ = NULL;
}
//destructor (does nothing)
DLNode::~DLNode()
{
    
}
//sets contents to input
void DLNode::set_contents(int contents)
{
    contents_ = contents;
}
//sets next node
void DLNode::set_next_node(DLNode * next_node )
{
    next_node_ = next_node;
}
//same but backwards
void DLNode::set_previous_node(DLNode* previous_node)
{
  previous_node_ = previous_node;
}

//gets contents
int DLNode::contents() const
{
    return contents_;
}
//gets the next node
DLNode * DLNode::next_node() const
{
    return next_node_;
}
//same but backwards
DLNode* DLNode::previous_node() const
{
  return previous_node_;
}