#include<bits/stdc++.h>
using namespace std;

void f(forward_list<int>numbers){
    for (int a:numbers){
        cout<<a<<" ";
    }
    cout<<endl;
}

int main(){
    forward_list<int>numbers1={1,5,6};
    forward_list<int>numbers2={9,2,4};
    numbers1.merge(numbers2);
    cout<<"number1 : ";
    f(numbers1);
    cout<<"numbers2 : ";
    f(numbers2);
    return 0;
}