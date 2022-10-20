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

// Function to delete a node without any reference to head pointer -------------------------------------------
void deleteNode(Node* pos)
{
    Node* temp = pos->next;

    pos->data = pos->next->data;

    pos->next = pos->next->next;

    free(temp);
}