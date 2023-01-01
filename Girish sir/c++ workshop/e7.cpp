#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<a<<((a%b ==0)? "is":"is not")<<"a multiple of"<<b<<endl;
    return 0;
}