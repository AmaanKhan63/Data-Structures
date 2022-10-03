#include<bits/stdc++.h>
using namespace std ;

void solve(string ip, string op)
{
    if(ip.length() == 0)
    {
        cout << op << " " ;
        return ;
    }
    string op1 = op ;
    string op2 = op ;
    op2.push_back(ip[0]) ;
    ip.erase(ip.begin()+0) ;
    solve(ip,op1) ;
    solve(ip,op2) ;
    return ;
}

int main()
{
    string ip = "abcdefgh" , op="";
    solve(ip,op) ;
}


------------------------------------------------------
void solve(string ip, string op,vector<string>& ans)
	{
	    if(ip.length()==0 && op.length()!=0)
	    {
	        ans.push_back(op) ;
	        return ;
	    }
	    string op1 = op ;
        string op2 = op ;
        op2.push_back(ip[0]) ;
        ip.erase(ip.begin()+0) ;
        solve(ip,op1,ans) ;
        solve(ip,op2,ans) ;
        return ;
	}
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    string ip = s , op = "" ;
		    vector<string> ans ;
		    solve(ip,op,ans) ;
		    sort(ans.begin(),ans.end()) ;
		    return ans ;
		}
