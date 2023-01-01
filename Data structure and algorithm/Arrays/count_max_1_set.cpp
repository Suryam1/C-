#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,c=0,max=0;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    cin>>a[i];
    for (int i=0;i<n;i++){
        if (a[i]==1 && i!=n-1)
        c++;
        else if (a[i]==1 && i==n-1  && max<(++c)){
            max=c;
            c=0;
        }
        else if (a[i]==0 && max<c){
            max=c;
            c=0;
        }
    }
    cout<<max<<endl;
}