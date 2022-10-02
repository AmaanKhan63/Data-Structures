#include<bits/stdc++.h>
using namespace std;

int secondmax(int arr[] , int n){
 int diff1=INT_MIN;
 int diff2;
 for(int i=0;i<n;i++){
  for(int j=i+1;j<n;j++){
    int diff = abs(arr[j] - arr[i]);
    if(diff>diff1){
    diff1 = diff;
    diff2 = diff1;
    }
    else{
        if(diff<diff1 && diff>diff2){
            diff2 = diff;
        }
    }
  }
 }
 return diff2;
}

int main(){
    int arr[]={14,12,70,15,95,65,22,30};
    int n = sizeof(arr)/sizeof(arr[0]);
    int a = secondmax(arr,n);
    cout<<a;
    return 0;
}
