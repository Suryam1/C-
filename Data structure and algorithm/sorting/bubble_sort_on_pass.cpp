#include <bits/stdc++.h>
using namespace std;
void f(int *a,int n,int p){
    int i;
    for (i=0;i<n;i++){
        for (int j=0;j<n-i-1;j++){
            if (a[j]>a[j+1])
            swap(a[j],a[j+1]);
        }
        if (i==p)
        return;
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int p;
    cin>>p;
    f(a,n,p);
    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}