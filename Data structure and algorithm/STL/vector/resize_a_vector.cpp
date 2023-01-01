#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>v{5,10,15,20};
    cout<<v.size()<<endl;
    v.resize(2);
    
    for (int x:v){
        cout<<x<<" ";
    }
}