#include <bits/stdc++.h>
using namespace std;

// Linked List Implementation of Stack ----------------------------------------------------------------


struct Node {
    int data;
    struct Node* next;
};

struct Node* newNode(int data)
{
    struct Node* stackNode = new Node;
    stackNode->data = data;
    stackNode->next = NULL;
    return stackNode;
}

int isEmpty(struct Node* root)
{
    return !root;
}

void push(struct Node** root, int data)
{
    struct Node* stackNode = newNode(data);

    stackNode->next = *root;
    *root = stackNode;

    cout << data << " pushed to stack\n";
}

int pop(struct Node** root)
{
    if (isEmpty(*root))
        return INT_MIN;

    struct Node* temp = *root;
    *root = (*root)->next;

    int popped = temp->data;
    free(temp);

    return popped;
}

int peek(struct Node* root)
{
    if (isEmpty(root))
        return INT_MIN;

    return root->data;
}