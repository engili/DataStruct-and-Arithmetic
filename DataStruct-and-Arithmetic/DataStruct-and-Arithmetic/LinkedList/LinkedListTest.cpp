//
//  LinkedListTest.cpp
//  DataStruct-and-Arithmetic
//
//  Created by Mengtian Li on 2021/7/10.
//

#include "LinkedListTest.hpp"


void LinkedList_setup() {
    
    LinkedList list = LinkedList();
    for (int i = 1; i <= 10; i++) {
        list.append(i);
    }
    
    LinkedNode *mid = findMiddle(list.headNode());
    LinkedNode *tail = list.tailNode();
    tail->next = mid;
    bool has = hasCircle(list.headNode());
    LinkedNode *node = findCircleEntry(list.headNode());
    
    printf("233");
    
}

LinkedNode *findMiddle(LinkedNode *head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }
    LinkedNode *slow = head;
    LinkedNode *fast = head;
    while (fast && fast->next) {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

bool hasCircle(LinkedNode *head) {
    if (head == nullptr || head->next == nullptr) {
        return false;
    }
    LinkedNode *slow = head;
    LinkedNode *fast = head;
    bool hasCircle = false;
    while (fast && fast->next) {
        fast = fast->next->next;
        slow = slow->next;
        if (slow == fast) {
            hasCircle = true;
            break;
        }
    }
    return hasCircle;
}

LinkedNode *findCircleEntry(LinkedNode *head) {
    if (head == nullptr || head->next == nullptr) {
        return nullptr;
    }
    LinkedNode *fast = head;
    LinkedNode *slow = head;
    while (fast && fast->next) {
        fast = fast->next->next;
        slow = slow->next;
        if (slow == fast) {
            fast = head;
            break;
        }
    }
    if (!fast) {
        return nullptr;
    }
    while (fast != slow) {
        fast = fast->next;
        slow = slow->next;
    }
    return slow;
}

void removeBackWardsNthNode(LinkedNode *head, int n) {
    LinkedNode *newHead = new LinkedNode(0);
    newHead->next = head;
    LinkedNode *fast = head;
    LinkedNode *slow = head;
    while (fast && n-- > 0) {
        fast = fast->next;
    }
    if (n > 0) {
        return;
    }
    while (fast && fast->next) {
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = slow->next->next;

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}
