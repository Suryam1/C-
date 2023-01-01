#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],i;
    for (i=0;i<n;i++)
    {
        cout<<"Enter elements of array"<<endl;
        cin>>a[i];
    }
    for (i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for (n--;n>=0;n--)
    {
        cout<<a[n]<<" ";
    }
    cout<<endl;
    return 0;
}