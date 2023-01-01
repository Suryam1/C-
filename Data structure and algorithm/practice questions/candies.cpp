#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    vector<int>v(n);
    int a[n];
    for(int i=0;i<n;i++){
        // int x;
        // cin>>x;
        // v.push_back(x);
        cin>>a[i];
    }
    cin>>m;
    int max1= *max_element(a,a+n);
    // int max=a[0];
    // for (int i=1;i<n;i++){
    //     if(max<=a[i]){
    //         max=a[i];
    //     }
    // }
    // cout<<max1;
    for (int i=0;i<n;i++){
        if ((a[i]+m)>=max1){
            cout<<"Student "<<i<<" has max candies."<<endl;
        }
    }
}