#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int temp=0;
    for(int i=0;i<n;i=i+2){
        if(i+1!=n){
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
