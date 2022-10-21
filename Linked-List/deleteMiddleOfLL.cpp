#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

// Delete Middle of Linked List ---------------------------------------------------------------------------------------------
Node* deleteMid(struct Node* head)
{
    // Base cases
    if (head == NULL)
        return NULL;
    if (head->next == NULL) {
        delete head;
        return NULL;
    }

    Node* slow_ptr = head;
    Node* fast_ptr = head;

    Node* prev;
    while (fast_ptr != NULL && fast_ptr->next != NULL) {
        prev = slow_ptr;
        slow_ptr = slow_ptr->next;
        fast_ptr = fast_ptr->next->next;
    }

    // Delete the middle node
    prev->next = slow_ptr->next;
    delete slow_ptr;

    return head;
}