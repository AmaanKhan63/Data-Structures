#include<bits/stdc++.h>
using namespace std;

int trailingZeros(int n){
	int count=0;

	if(n<0)
		return -1;
	for(int i=5;n/i>0;i*=5){
		count+=n/i;
	}

	return count;
}

int main(){
	int n;

	cout<<"enter input,n"<<endl;
	cin>>n;

	if(trailingZeros(n))
		cout<<"no of trailing zero in "<<n<<"! is "<<trailingZeros(n)<<endl;
	else
		cout<<"input is negative, can't proceed"<<endl;
	
	return 0;
}	
