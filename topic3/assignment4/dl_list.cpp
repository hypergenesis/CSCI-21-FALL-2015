


#include "dl_list.h"

//constructor
DLList::DLList()
{
    head_ = NULL;
    tail_ = NULL;
    size_ = 0;
}
//destructor
DLList::~DLList()
{
    Clear();
}

//creates a new dynamic DLNode with the contents of the parameter and attaches as the new head of the list
void DLList::InsertHead(int new_head)
{
    
    DLNode* temp = new DLNode(new_head);
    
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

void DLList::InsertTail(int new_tail)
{
    
    if (tail_ != NULL)
    {
        DLNode* temp = new DLNode(new_tail);
        
        tail_ -> set_next_node(temp);
        
        tail_ = temp;  
        
        tail_ -> set_next_node(NULL);
        
        size_++;
    }
    else if(tail_ == NULL)
    {
        DLNode* temp = new DLNode(new_tail);
        
        tail_ = temp;
        
        tail_ -> set_next_node(NULL);
        
        head_ = tail_;
        
        size_++;
    }
}

void DLList::Insert(int new_node)
{
    DLNode *temp = new DLNode(new_node);
    //creates temp node and makes it point at the new_node information
    DLNode *iterator = head_;
    //creates an iterator and makes it point to head_
    DLNode *iterator2 = tail_;
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
                //makes the previous node point at the new node
                temp -> set_next_node(iterator);
                //makes the new node point at the next node
                iterator -> set_previous_node(temp);
                //makes the next node point at the new node
                temp -> set_previous_node(iterator2);
                //makes the new node point the previous node
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
            
            else
            {
                iterator2 = iterator;
                iterator = iterator -> next_node();
            }
        }
    }
}

bool DLList::RemoveFirstOccurence(int remove_node)
{
    DLNode *temp = NULL;
    //creates a temp pointer to hold the node to be deleted
    DLNode *iterator = head_;
    //creates an iterator and makes it point to head_
    DLNode *iterator2 = NULL;
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
            
            else if((iterator -> next_node()) == NULL)
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
                iterator -> set_previous_node(iterator2);
                //iterator's node sets the previous node to iterator2's node
                delete temp;
                //deletes the node
                temp = NULL;
                //sets temp to NULL
                size_--;
                //size of linked list decreases
                return true;
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
void DLList::RemoveHead()
{
    if (head_ != NULL)
    {
        //make new temp
        //make temp point to old head
        DLNode* temp = head_;
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


void DLList::RemoveTail()
{
    if (head_ != NULL)
    {
        
        if (head_ -> next_node() == NULL)
        {
            RemoveHead();
        }
        
        else
        {
            DLNode* temp = NULL;
            DLNode* iterator = head_;
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

int DLList::GetHead() const
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


int DLList::GetTail() const
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
void DLList::Clear()
{
    while (head_ != NULL)
    {
        RemoveHead();
    }
    tail_ = NULL;
}

//accessor for size_
unsigned int DLList::size() const
{
    return size_;
}

//returns a string representation of the contents of all nodes in the list, in the format NUM1, NUM2, ..., LASTNUM returns the empty string on an empty list (i.e. returns "")

string DLList::ToString() const
{

    stringstream ss;
    ss.str();
    string output_string = "";
    
    DLNode * temp = head_;
    
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


