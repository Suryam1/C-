#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the digit:"<<endl;
    int n;
    cin>>n;
    int f=1;
    for (int i=1; i<=n;++i)
    {
        f=f*i;
    }
    cout<<"Product of n numbers is:"<<f<<endl;
    return 0;
}