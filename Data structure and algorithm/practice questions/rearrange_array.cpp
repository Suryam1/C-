#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=0;i<n;i=i+2){
        int x=a[n-1];
        for(int j=n-1;j>i+1;j--){
            a[j]=a[j-1];
        }
        a[i+1]=x;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}