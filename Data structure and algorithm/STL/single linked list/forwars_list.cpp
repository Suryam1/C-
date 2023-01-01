#include<bits/stdc++.h>
using namespace std;

void f(forward_list<int>numbers){
    for (int a:numbers){
        cout<<a<<" ";
    }
    cout<<endl;
}

int main(){
    forward_list<int>numbers={100,2,3,4,5};
    f(numbers);
    return 0;
}