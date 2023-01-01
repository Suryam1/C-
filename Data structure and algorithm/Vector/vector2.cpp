#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vec{10,20,30,40,50};
    vec.push_back(60);
    vec.push_back(70);
    vec.push_back(80);
    vec.push_back(90);
    vec.push_back(100);
    vec.push_back(110);
    cout<<"Size : "<<vec.size()<<endl;
    cout<<"Capacity : "<<vec.capacity()<<endl;
    cout<<"Max_Size : "<<vec.max_size()<<endl;
}