#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={10,5,1,8,9,4};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
        for(int k=i;k>0&&a[k]<a[k-1];k--){
            int temp=a[k];
            a[k]=a[k-1];
            a[k-1]=temp;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
