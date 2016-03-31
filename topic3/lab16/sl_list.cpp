#include "sl_list.h"

//constructor
SLList::SLList()
{
    head_ = NULL;
    size_ = 0;
}
//destructor
SLList::~SLList()
{
    Clear();
}

//creates a new dynamic SLNode with the contents of the parameter and attaches as the new head of the list
void SLList::InsertHead(int new_head)
{
    
    SLNode* temp = new SLNode(new_head);
    //make the new head point to the old head
    temp -> set_next_node(head_);
    //make the head pointer point to the new head
    head_ = temp;
}

//removes the head node from the list, or does nothing if the list is empty
void SLList::RemoveHead()
{
    if (!head_)
    {
        
    }
    else
    {
        //make new temp
        //make temp point to old head
        SLNode* temp = head_;
        //make head point to next node
        head_ = head_ -> next_node();
        //delete temp
        delete temp;
        //set temp to null
        temp = NULL;
    }
}

//clears the entire contents of the list, freeing all memory associated with all nodes
void SLList::Clear()
{
    
}

//accessor for size_
unsigned int SLList::size() const
{
    return size_;
}

//returns a string representation of the contents of all nodes in the list, in the format NUM1, NUM2, ..., LASTNUM returns the empty string on an empty list (i.e. returns "")

string SLList::ToString() const
{
    return "";
}