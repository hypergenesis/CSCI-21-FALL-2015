#ifndef SL_LIST
#define SL_LIST


#include "sl_node.h"

#include <iostream>
using namespace std;

class SLList
{
    private:
    SLNode* head_;
    unsigned int size_;
    
    public:
    SLList();
    ~SLList();
    
    void InsertHead(int new_head);
    void RemoveHead();
    void Clear();
    unsigned int size() const;
    string ToString() const;
};

#endif