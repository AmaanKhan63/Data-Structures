#include<iostream>
using namespace std;

int trailingzeroes(int N)
 {
        
       int count = 0;
       int x;
       for(int i = 5; i<=N; i = i*5){
           x = N/i;
           count = count + x;
           
       }    
       return count;
 }
int main(){
	int number, count = 0;
	cout<<"Enter the number"<<endl;
	cin>>number;
	count = trailingzeroes(number);
	cout<<"No of trailing zeroes -> "<<count<<endl;
	return 0;

}
