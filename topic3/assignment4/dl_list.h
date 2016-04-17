#ifndef DL_LIST
#define DL_LIST

#include "dl_node.h"
#include <sstream>
#include <iostream>
using namespace std;

class DLList
{
    private:
    DLNode* head_;
    DLNode* tail_;
    unsigned int size_;
    
    public:
    DLList();
    ~DLList();
    
    void InsertHead(int new_head);
    void InsertTail(int new_tail);
    void Insert(int new_node);
    bool RemoveFirstOccurence(int remove_node);
    bool RemoveAllOccurence(int remove_node);
    void RemoveHead();
    void RemoveTail();
    int GetHead() const;
    int GetTail() const;
    void Clear();
    bool Get(int target) const;
    unsigned int size() const;
    string ToString() const;
};

#endif