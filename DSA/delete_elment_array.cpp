#include<iostream>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    cin>>a[i];
    cin>>x;
    for (int i=0;i<n;i++)
    {
        if (x==a[i])
        {
            for (int j=i;j<n-1;j++)
            {
                a[j]=a[j+1];
            }
            a[n-1]=0;
            break;
        }
    }
    for (int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}