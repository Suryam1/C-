#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>v(5,10);
    int n,x;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    for (int x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    v.pop_back();
    for (int y:v){
    cout<<y<<" ";
    }
    cout<<endl;
    v.clear();
    cout<<v.size()<<endl;
    if (v.empty()==true)
    cout<<"empty";
    else
    cout<<"Not empty";
}