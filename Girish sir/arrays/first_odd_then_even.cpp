#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n]={0};
    int x=0;
    int y=n/2+1;
    int z=n/2;
    if (n%2==0)
    {
    for (int i=1;i<=n;i++)
    {
        if (i%2!=0)
        {
            a[x]=i;
            x=x+1;
        }
        else
        {
            a[z]=i;
            z=z+1;
        }
    }
    }
    else
    {
    for (int i=1;i<=n;i++)
    {
        if (i%2!=0)
        {
            a[x]=i;
            x=x+1;
        }
        else
        {
            a[y]=i;
            y=y+1;
        }
    }
    }
    for (int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}