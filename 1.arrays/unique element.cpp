#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={1,2,3,2,1};
    int ans=0;
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
        ans=ans^a[i];
    }
    cout<<"the unique element is "<<ans<<endl;
}
