//
//  LinkedListTest.hpp
//  DataStruct-and-Arithmetic
//
//  Created by Mengtian Li on 2021/7/10.
//

#ifndef LinkedListTest_hpp
#define LinkedListTest_hpp

#include "LinkedList.hpp"
#include <stdio.h>

void LinkedList_setup();

//找到链表中间节点
LinkedNode *findMiddle(LinkedNode *head);
//是否有环
bool hasCircle(LinkedNode *head);
//找到环的入口
LinkedNode *findCircleEntry(LinkedNode *head);
//删除倒数第N个节点
void removeBackWardsNthNode(LinkedNode *head, int n);


#endif /* LinkedListTest_hpp */
