


#include "sl_list.h"

//constructor
SLList::SLList()
{
    head_ = NULL;
    tail_ = NULL;
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
    
    //increase size
    size_++;
    if (tail_ == NULL)
    {
        tail_ = head_;
    }
}

void SLList::InsertTail(int new_tail)
{
    
    if (tail_ != NULL)
    {
        SLNode* temp = new SLNode(new_tail);
        
        tail_ -> set_next_node(temp);
        
        tail_ = temp;  
        
        tail_ -> set_next_node(NULL);
        
        size_++;
    }
    else if(tail_ == NULL)
    {
        SLNode* temp = new SLNode(new_tail);
        
        tail_ = temp;
        
        tail_ -> set_next_node(NULL);
        
        head_ = tail_;
        
        size_++;
    }
}

void SLList::Insert(int new_node)
{
    SLNode *temp = new SLNode(new_node);
    //creates temp node and makes it point at the new_node information
    SLNode *iterator = head_;
    //creates an iterator and makes it point to head_
    SLNode *iterator2 = NULL;
    //second iterator to trail behind the first iterator
    unsigned int original_size = size_;
    
    if(iterator == NULL)
    //checks if the list is empty
    {
        InsertHead(new_node);
    }
    
    while(iterator != NULL && original_size == size_)
    {
        if((iterator -> contents()) >= (temp -> contents()))
        //checks if the iterator is larger than or equal to the new node
        {
            if(iterator2 == NULL)
            {
                InsertHead(new_node);
            }
            
            else
            {
                iterator2 -> set_next_node(temp);
                temp -> set_next_node(iterator);
                size_++;
            }
        }
        
        else if((iterator -> contents()) < (temp -> contents()))
        //checks if the iterator is smaller than the new node
        {
            if((iterator -> next_node()) == NULL)
            {
                InsertTail(new_node);
            }
            
            iterator2 = iterator;
            iterator = iterator -> next_node();
        }
    }
}


bool SLList::RemoveFirstOccurence(int remove_node)
{
    SLNode *temp = NULL;
    //creates a temp pointer to hold the node to be deleted
    SLNode *iterator = head_;
    //creates an iterator and makes it point to head_
    SLNode *iterator2 = NULL;
    //second iterator to trail behind the first iterator
    
    while(iterator != NULL)
    {
        if((iterator -> contents()) == remove_node)
        {
            if(iterator2 == NULL)
            {
                RemoveHead();
                return true;
            }
            
            else
            {
                if((iterator -> next_node()) == NULL)
                {
                    RemoveTail();
                    return true;
                }
                
                else
                {
                    temp = iterator;
                    //points to the node that will be deleted
                    iterator = iterator -> next_node();
                    //iterator points to the node after the one to be deleted
                    iterator2 -> set_next_node(iterator);
                    //iterator2's node sets the next node to iterator's node, skipping over the soon to be deleted node
                    delete temp;
                    //deletes the node
                    temp = NULL;
                    //sets temp to NULL
                    size_--;
                    //size of linked list decreases
                    return true;
                }
            }
        }
        
        else
        {
            iterator2 = iterator;
            iterator = iterator -> next_node();
        }
    }
    
    return false;
}

//removes the head node from the list, or does nothing if the list is empty
void SLList::RemoveHead()
{
    if (head_ != NULL)
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
        //decrement size
        size_--;
    }
    
    if (head_ == NULL)
    {
        tail_ = NULL;
    }
}


void SLList::RemoveTail()
{
    if (head_ != NULL)
    {
        
        if (head_ -> next_node() == NULL)
        {
            RemoveHead();
        }
        
        else
        {
            SLNode* temp = NULL;
            SLNode* iterator = head_;
            while (iterator -> next_node() != NULL)
            {
                temp = iterator;
                iterator = iterator -> next_node();
            }
            temp -> set_next_node(NULL);
            tail_ = temp;
            delete iterator;
            temp = NULL;
            iterator = NULL;
            size_--;
        }
    }
}

int SLList::GetHead() const
{
    if (head_ == NULL)
    {
        return 0;
    }
    else
    {
        return (head_ -> contents());
    }
}


int SLList::GetTail() const
{
    if(tail_ == NULL)
    {
        return 0;
    }
    
    else
    {
        return (tail_ -> contents());
    }
}

//clears the entire contents of the list, freeing all memory associated with all nodes
void SLList::Clear()
{
    while (head_ != NULL)
    {
        RemoveHead();
    }
    tail_ = NULL;
}

//accessor for size_
unsigned int SLList::size() const
{
    return size_;
}

//returns a string representation of the contents of all nodes in the list, in the format NUM1, NUM2, ..., LASTNUM returns the empty string on an empty list (i.e. returns "")

string SLList::ToString() const
{

    stringstream ss;
    ss.str();
    string output_string = "";
    
    SLNode * temp = head_;
    
    if (head_ == NULL)
    {
        return output_string;
    }
    
    while (temp != NULL)
    {
        ss << temp -> contents();
        if (temp -> next_node() != NULL)
        {
            ss << ", ";
        }
        temp = temp -> next_node();
    }
    
    output_string = ss.str();
    
    return output_string;
}


