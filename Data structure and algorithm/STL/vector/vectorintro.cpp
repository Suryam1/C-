// vector is a container whose size can increase or decrease as elements are added or removed
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>v;
    v.push_back(10);
    v.push_back(5);
    v.push_back(7);
    for (int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    for (int x:v){
        cout<<x<<" ";   //Kind of for loop we can use in stl
    }
}