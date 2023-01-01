#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>v;
    int n,x;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    cout<<v.front()<<" ";
    cout<<v.back()<<" ";
    cout<<endl;
    for (int x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    v.pop_back();
    for (int y:v){
    cout<<y<<" ";
    }
    cout<<endl;
}