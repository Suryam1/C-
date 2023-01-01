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

    numbers.push_front(111);
    f(numbers);
    numbers.push_back(222);
    f(numbers);

    numbers.reverse();
    f(numbers);
}