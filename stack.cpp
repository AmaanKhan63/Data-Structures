#include<bits/stdc++.h>
#include<stack>
using namespace std ;

void insert(stack<int> &a, int temp)
{
    if(a.size()==0 || a.top()<=temp)
    {
        a.push(temp) ;
        return ;
    }
    int temp1 = a.top() ;
    a.pop() ;
    insert(a,temp) ;
    a.push(temp1);
    return ;
}

void sort(stack<int> &a)
{
    if(a.size()==1)
    {
        return;
    }
    int temp = a.top() ;
    a.pop() ;
    sort(a) ;
    insert(a,temp) ;
}

int main()
{
    stack<int> a ;
    a.push(2) ;
    a.push(1) ;
    a.push(0) ;
    a.push(5) ;
    sort(a) ;
    while(!a.empty())
    {
        cout << " " << a.top() ;
        a.pop() ;
    }
}
