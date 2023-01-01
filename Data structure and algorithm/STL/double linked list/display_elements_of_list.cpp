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
    cout<<"first element : "<<numbers.front()<<endl;
    cout<<"last element : "<<numbers.back()<<endl;

    auto it=numbers.begin();
    cout<<"(iterator) list of numbers : [ ";
    while (it!=numbers.end()){
        cout<<" "<<*it;
        ++it;
    }
    cout<<"]"<<endl;

    auto it_back=numbers.rbegin();
    cout<<"(iterator) list of numbers (reverse) : [ ";
    while (it_back!=numbers.rend()){
        cout<<" "<<*it_back;
        ++it_back;
    }
    cout<<"]"<<endl;
}