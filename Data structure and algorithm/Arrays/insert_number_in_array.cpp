#include<bits/stdc++.h>
using namespace std;
void insert(int * a,int n,int x,int ele){
    for (int i=n;i>x;i--){
        a[i]=a[i-1];
    }
    a[x]=ele;
}
void printArray(int *a,int n){
    for(int i=0;i<n+1;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int t;
    cout<<"Enter number of test cases : ";
    cin>>t;
    while (t--){
        int n;
        cout<<"Enter number of elements : ";
        cin>>n;
        int *a=new int [n+1];
        cout<<"Enter array elements : ";
        for (int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<"Array before insertion : ";
        printArray(a,n);
        int x,ele;
        cout<<"Enter index where you want to insert : ";
        cin>>x;
        cout<<"Enter number you want to insert : ";
        cin>>ele;
        insert(a,n,x,ele);
        cout<<"Array after insertion : ";
        printArray(a,n);
        delete [] a;
    }
    return 0;
}