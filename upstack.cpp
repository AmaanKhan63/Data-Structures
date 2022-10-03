#includebitsstdc++.h
#includestack
using namespace std ;

void del_mid(stack<int> &a,int os)
{
    if(a.size()==((os+1)2))
    {
        a.pop();
        return ;
    }
    int temp = a.top() ;
    a.pop() ;
    del_mid(a,os);
    a.push(temp) ;
    return ;
}

int main()
{
    stack<int> a ;
    a.push(1) ;
    a.push(2) ;
    a.push(3) ;
    a.push(4) ;
     a.push(5) ;
    int size=a.size() ;
    del_mid(a,size) ;
    while(!a.empty())
    {
        cout     a.top() ;
        a.pop() ;
    }
}
