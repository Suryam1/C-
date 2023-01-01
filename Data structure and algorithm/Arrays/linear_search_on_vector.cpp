#include <bits/stdc++.h>
using namespace std;
int linear_search(vector<int>v1,int n,int key){
    vector<int>::iterator it;
    it =find(v1.begin(),v1.end(),key);
    if (it!=v1.end())
    return (it-v1.begin());
    return -1;
}
int main(){
    int t;
    cin>>t;
    while (t--){
        int n,a;
        cin>>n;
        vector<int>v1;
        for (int i=0;i<n;i++){
            cin>>a;
            v1.push_back(a);
        }
        int key;
        cin>>key;
        int found=linear_search(v1,n,key);
        if (found==-1)
        cout<<key<<" not found "<<endl;
        else
        cout<<key<<" is found at index "<<found<<endl;
    }
    return 0;
}