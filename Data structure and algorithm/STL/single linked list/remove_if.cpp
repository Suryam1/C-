#include<bits/stdc++.h>
using namespace std;

void f(forward_list<int>numbers){
    for (int a:numbers){
        cout<<a<<" ";
    }
    cout<<endl;
}

int main(){
    forward_list<int>numbers={1,100,2,3,1,10,11,12,1};
    // numbers.remove(1);
    // f(numbers);

    numbers.remove_if([](int n){return n>10;});
    f(numbers);
    return 0;
}