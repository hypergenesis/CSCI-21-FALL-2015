#ifndef SL_LIST
#define SL_LIST

#include "sl_node.h"
#include <sstream>
#include <iostream>
using namespace std;

class SLList
{
    private:
    SLNode* head_;
    SLNode* tail_;
    unsigned int size_;
    
    public:
    SLList();
    ~SLList();
    
    void InsertHead(int new_head);
    void InsertTail(int new_tail);
    void RemoveHead();
    void RemoveTail();
    int GetHead() const;
    int GetTail() const;
    void Clear();
    unsigned int size() const;
    string ToString() const;
    
    bool RemoveFirstOccurence(int remove_node);
    void Insert(int new_node);
};

#endif