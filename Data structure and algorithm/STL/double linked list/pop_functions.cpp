#include<bits/stdc++.h>
using namespace std;
void f(list<int>numbers){
    for (int a:numbers){
        cout<<a<<" ";
    }
    cout<<endl;
}
int main(){
    list<int>numbers={11,12,13,14,15};
    f(numbers);
    // cout<<"first element : "<<numbers.front()<<endl;
    // cout<<"last element : "<<numbers.back()<<endl;

    numbers.pop_front();
    f(numbers);
    numbers.pop_back();
    f(numbers);
}