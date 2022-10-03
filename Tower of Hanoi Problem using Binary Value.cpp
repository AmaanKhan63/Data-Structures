#include<bits/stdc++.h>

using namespace std;

int main() {
   int n, a;
   cout<<"\nENTER THE NUMBER OF DISKS:  ";
   cin>>n;
   for (a = 1; a < (1 << n); a++) {
      cout<<"\nMOVE FROM PEG  "<<(a&a-1)%3 <<" TO PEG "<<((a|a-1)+1)%3;
   }
   cout<<endl;
}