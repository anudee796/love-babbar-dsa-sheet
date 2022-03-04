#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={1,2,3,4,5};
    int max=INT_MIN;
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    cout<<"max element is "<<max<<endl;
}
