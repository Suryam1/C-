#include<iostream>
using namespace std;
int main(){
    int a[7]={10,20,30,40,50};
    int b[]={100,110};
    for (int i=0;i<7;i++){
        a[i]=a[++i]+b[0];
    }
    for (int i=0;i<7;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}