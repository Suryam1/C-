#include<bits/stdc++.h>
using namespace std;
void f(list<int>numbers){
    for (int a:numbers){
        cout<<a<<" ";
    }
    cout<<endl;
}
int main(){
    list<int>numbers={1,100,100,2,3,10,1,11,11,-1,12,10,1};
    f(numbers);
    numbers.sort();
    numbers.unique();// normally unique remove only consecutive duplicates
    f(numbers);
}