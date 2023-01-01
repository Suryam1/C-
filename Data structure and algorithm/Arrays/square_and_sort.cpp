#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> a;
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x*x);
    }
    sort(a.rbegin(),a.rend());
    for (int x:a)
    cout<<x<<" ";
    cout<<endl;
}