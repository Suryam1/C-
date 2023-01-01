#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    cout<<a<<"is"<<((a%2==0)?"even":"odd")<<endl;
    return 0;
}