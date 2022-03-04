#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={6,3,4,6,1,7,2,6};
    int n=sizeof(a)/sizeof(a[0]);
    int sum;
    cout<<"enter the value of sum"<<endl;
    cin>>sum;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==sum){
                cout<<i<<" "<<j<<endl;
            }
        }
    }
}
