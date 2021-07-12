//
//  LinkedList.cpp
//  DataStruct-and-Arithmetic
//
//  Created by Mengtian Li on 2021/7/10.
//

#include "LinkedList.hpp"

LinkedList::LinkedList() {
    dumpty = new LinkedNode(0);
}

void LinkedList::append(int val) {
    LinkedNode *pre = nullptr;
    LinkedNode *node = dumpty;
    while (node) {
        pre = node;
        node = node->next;
    }
    
    LinkedNode *newNode = new LinkedNode(val);
    pre->next = newNode;
}

LinkedNode *LinkedList::headNode() {
    return dumpty->next;
}

LinkedNode *LinkedList::tailNode() {
    LinkedNode *tail = nullptr;
    LinkedNode *node = dumpty->next;
    while (node) {
        tail = node;
        node = node->next;
    }
    return tail;
}
