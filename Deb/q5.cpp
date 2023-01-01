#include <iostream>
using namespace std;
int main(){
    vector<int,int>v;
    for(int i=0;i<10;i++){
        int n;
        cin>>n;
        v.push_back(n);
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<endl;
    }
}