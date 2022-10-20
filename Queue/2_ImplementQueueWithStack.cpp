#include <bits/stdc++.h>
using namespace std;

// Queue Implementation using stack ----------------------------------------------------------------

// Method 1 (By making enQueue operation costly)
struct Queue {
    stack<int> s1, s2;

    void enQueue(int x)
    {
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }

        s1.push(x);

        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }

    int deQueue()
    {
        if (s1.empty()) {
            cout << "Q is Empty";
            exit(0);
        }

        int x = s1.top();
        s1.pop();
        return x;
    }
};

// Method 2 (By making deQueue operation costly)

struct Queue {
    stack<int> s1, s2;

    void enQueue(int x)
    {
        s1.push(x);
    }

    int deQueue()
    {
        if (s1.empty() && s2.empty()) {
            cout << "Q is empty";
            exit(0);
        }

        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        int x = s2.top();
        s2.pop();
        return x;
    }
};