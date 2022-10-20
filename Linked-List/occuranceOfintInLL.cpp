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

// iterative

int count(struct Node *head, int search_for)
{
    struct Node *temp = head;
    int cnt = 0;

    while (temp != NULL)
    {
        if (temp->data == search_for)
            cnt++;
        temp = temp->next;
    }
    return cnt;
}

// recursive

int countRec(struct Node *head, int search_for)
{
    if (head == NULL)
        return 0;
    if (head->data == search_for)
        return 1 + countRec(head->next, search_for);
    return countRec(head->next, search_for);
}