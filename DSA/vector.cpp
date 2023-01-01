#include<vector>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    v.push_back(10);
    for (auto x:v)
    cout<<x<<" ";
    return 0;
}