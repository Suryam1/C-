#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    // int sum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // sum=a[0];
    cout<<a[0]<<" ";
    for (int i=1;i<n;i++){
            // sum=sum+a[i];
            a[i]=a[i]+a[i-1];
            cout<<a[i]<<" ";
    }
    cout<<endl;
}