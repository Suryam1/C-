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
    // cout<<"Insert after : "<<endl;


    // auto it_insert=numbers.before_begin();
    // numbers.insert_after(it_insert,333);

    // auto it_erase=find(numbers.before_begin(),numbers.end(),3);
    // if (it_erase!=numbers.end()){
    //     cout<<"Found 3 : "<<endl;
    // }
    // else{
    //     cout<<"Could not find 3 : "<<endl;
    // }

    // numbers.erase_after(it_erase);
    // f(numbers);
    // numbers.pop_front();
    // f(numbers);
    // numbers.resize(10);
    // f(numbers);
    // numbers.resize(2);
    // f(numbers);
    // numbers.resize(10);
    // f(numbers);


    numbers={11,12,13,14,15};
    f(numbers);
    forward_list<int>other_numbers{200,400,600};
    f(other_numbers);
    numbers.swap(other_numbers);

    cout<<"Numbers : ";
    f(numbers);
    cout<<"Other numbers : ";
    f(other_numbers);
}