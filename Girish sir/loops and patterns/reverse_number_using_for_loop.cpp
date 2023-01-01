#include<iostream>
using namespace std;
int main()
{
    int n,rev;
    for (cout<<"Enter a number:"<<endl,cin>>n,rev=0;n!=0;n=n/10)
    {
        rev=rev*10+n%10;
    }
    cout<<"reverse is "<<rev<<endl;
    return 0;
}