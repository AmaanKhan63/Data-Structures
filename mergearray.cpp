#include <bits/stdc++.h>
using namespace std;

void merge(char arr1[],char arr2[], int n1, int n2){
    string s;
    int i=0;
    int j=0;
    int l=2;
    while(i<n1&&j<n2){
        if(l%2==0){
            s.push_back(arr1[j]);
            i++;
        }
        else{
            s.push_back(arr2[j]);
            j++;
        }
        l++;
    }
    while(i<n1){
        s.push_back(arr1[j]);
            i++;
    }
    while(j<n2){
          s.push_back(arr2[j]);
            j++;
    }

    for(int i=0;i<n1+n2;i++){
        cout<<s[i]<<" ";
    }
}
int main(){
    char arr1[]={'2','4','6','8'};
    char arr2[]={'a','b','c','d','e','f'};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    merge(arr1,arr2,n1,n2);
    return 0;
}
