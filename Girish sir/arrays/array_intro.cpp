#include<iostream>
using namespace std;
int main()
{
    int a[10],i;
    for (i=0;i<=5;i++)
    {
        cout<<"Enter elements of array"<<endl;
        cin>>a[i];
    }
    for (i=0;i<=5;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}