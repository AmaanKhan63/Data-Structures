#include<bits/stdc++.h>
using namespace std ;

void solve(string input, string output, vector<string> &vec)
{
    if(input.length() == 0)
    {
        if(output.length()!=0) {
            vec.push_back(output) ;
        }
        return ;
    }
    string op1 = output ;
    string op2 = output ;
    op2.push_back(input[0]) ;
    input.erase(input.begin()+0) ;
    solve(input,op1,vec) ;
    solve(input,op2,vec) ;
    return ;
}

int main()
{
    string x="aab",y="" ;
    //cin >> x ;
    vector <string> vec ;
    solve(x,y,vec) ;
    for(string a:vec)
    {
        cout << a << endl ;
    }
    vector <string> new_vec ;
    int flag = 0 ;
    for(string a:vec)
    {
        flag = 0 ;
        for(string b:new_vec)
        {
            if(b==a)
            {
                flag = 1 ;
                break ;
            }
        }
        if(flag == 0)
        {
            new_vec.push_back(a) ;
        }
    }
    cout << endl ;
    for(string a:new_vec)
    {
        cout << a << endl ;
    }
}
