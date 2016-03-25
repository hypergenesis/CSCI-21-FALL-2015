#include "sl_node.h"
//constructor
SLNode::SLNode()
{
    SLNode * next_node_ = NULL;
    contents_ = 0;
}
//alt constructor (overloaded)
SLNode::SLNode(int parameter)
{
    contents_ = parameter;
    next_node_ = NULL;
}
//destructor (does nothing)
SLNode::~SLNode()
{
    
}
//sets contents to input
void SLNode::set_contents(int contents)
{
    contents_ = contents;
}
//sets next node
void SLNode::set_next_node(SLNode * next_node )
{
    next_node_ = next_node;
}
//gets contents
int SLNode::contents() const
{
    return contents_;
}
//gets the next node
SLNode * SLNode::next_node() const
{
    return next_node_;
}