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

// Detect loop in a linked list(Floyd’s Cycle-Finding Algorithm) FASTEST method (O(n),O(1)) ------------------
bool detectLoop(Node* head)
{
    Node* slow_ptr = head;
    Node* fast_ptr = head;

    while (slow_ptr && fast_ptr && fast_ptr->next) {
        slow_ptr = slow_ptr->next;
        fast_ptr = fast_ptr->next->next;

        if (slow_ptr == fast_ptr)
            return true;
    }
    return false;
}

// using hashing (O(n),O(n))
bool detectLoop(Node* head)
{
    unordered_set<Node*> s;

    while (head != NULL) {
        if (s.find(head) != s.end())
            return true;
        s.insert(head);

        head = head->next;
    }
    return false;
}
