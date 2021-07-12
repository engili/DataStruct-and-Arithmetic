//
//  LinkedList.hpp
//  DataStruct-and-Arithmetic
//
//  Created by Mengtian Li on 2021/7/10.
//

#ifndef LinkedList_hpp
#define LinkedList_hpp

#include <stdio.h>

struct LinkedNode {
    int val;
    LinkedNode *next;
    LinkedNode(int val): val(val),next(nullptr) {}
};


class LinkedList {
private:
    LinkedNode *dumpty;
public:
    LinkedList();
    LinkedNode *headNode();
    LinkedNode *tailNode();
    //
    void append(int val);
    
    //
    
    
};

#endif /* LinkedList_hpp */
