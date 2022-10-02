#include <bits/stdc++.h>
using namespace std;

bool isValid(string input){
stack<char> stack;
for(char c : input){
  if(c == '(' || c == '[' || c == '{') stack.push(c);
  else{
  if( c == ')' && stack.top() == '(') stack.pop();
  else if (c == ']' && stack.top() == '[') stack.pop();
  else if (c == '}' && stack.top() == '{') stack.pop();
  else return false;
 }
}
return true;
}

int main(){
    string s = "{}"; 
    if(isValid(s)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
