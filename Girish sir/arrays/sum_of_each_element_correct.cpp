#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    cin>>a[i];
    int b[n];
    for (int i=0;i<n;i++)
    {
        int sum=0;
        for (int j=0;j<=i;j++)
        sum=sum+a[j];
        b[i]=sum;
    }
    for (int i=0;i<n;i++)
    {
        a[i]=b[i];
    }
    for (int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}