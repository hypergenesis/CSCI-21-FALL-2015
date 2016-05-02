#include "bs_tree.h"

    BSTree()//constructor
    {
        root_ = NULL;
        size_ = 0;
    }
    ~BSTree()//deconstructor
    {
        Clear();
    }
    bool Insert(int contents)//calls private Insert
    {
        Insert(contents, root_);
    }
    void Clear()//calls private Clear
    {
        Clear(root_)
    }
    unsigned int size() const//accessor for size
    {
        return size_;
    }
    string InOrder()//calls private InSize
    {
        InOrder(root_);
    }
    