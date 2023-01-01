#include<iostream>
using namespace std;
int main()
{
    int n,rev=0;
    int a;
    cout<<"Enter number:"<<endl;
    cin>>n;
    a=n;
    while (n!=0)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
    if (a==rev)
    {
        cout<<a<<"is palindrone"<<endl;
    }
    else
    {
        cout<<a<<"is not palindrone"<<endl;
    }
    return 0;
}