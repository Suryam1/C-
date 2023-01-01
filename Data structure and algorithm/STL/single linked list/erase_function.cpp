#include<bits/stdc++.h>
using namespace std;
void f(forward_list<int>numbers){
    for (int a:numbers){
        cout<<a<<" ";
    }
    cout<<endl;
}
int main(){
    forward_list<int>numbers={100,2,4,3,6,7,3,1000};
    f(numbers);
    // cout<<"Insert after : "<<endl;


    // auto it_insert=numbers.before_begin();
    // numbers.insert_after(it_insert,333);

    auto it_erase=find(numbers.before_begin(),numbers.end(),3);
    cout<<*it_erase<<endl;
    if (it_erase!=numbers.end()){
        cout<<"Found 3 : "<<endl;
    }
    else{
        cout<<"Could not find 3 : "<<endl;
    }

    numbers.erase_after(it_erase);
    f(numbers);
}