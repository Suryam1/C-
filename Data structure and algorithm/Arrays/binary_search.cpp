#include<bits/stdc++.h>
using namespace std;
int binary_search(int * a,int n,int x){
    int s=0,e=n-1;
    while (s<=e){
        int mid=(s+e)/2;
        if (a[mid]==x)
        return mid;
        else if (a[mid]>x)
        e=mid-1;
        else
        s=mid+1;
    }
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
        int found=binary_search(a,n,x);
        if (found==-1)
        cout<<"Not found"<<endl;
        else 
        cout<<"Found at index "<<found<<endl;
        delete [] a;
    }
    return 0;
}