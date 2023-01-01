#include<bits/stdc++.h>
using namespace std;
int f(int * a,int n,int x){
    for (int i=0;i<n;i++)
    if (a[i]==x)
    return i;
return -1;
}
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int *a=new int [n];
        for (int i=0;i<n;i++){
            cin>>a[i];
        }
        int x;
        cin>>x;
        int found=f(a,n,x);
        if (found==-1)
        cout<<"Not found"<<endl;
        else 
        cout<<"Found at index "<<found<<endl;
        delete [] a;
    }
    return 0;
}