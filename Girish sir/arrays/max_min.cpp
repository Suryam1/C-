#include<iostream>
using namespace std;
int main()
{
    int a[5],i;
    for (i=0;i<5;i++)
    cin>>a[i];
    int max,min;
    max=a[0];
    min=a[0];
    for (i=1;i<5;i++)
    {
        if (a[i]>max)
        max=a[i];
        if (a[i]<min)
        min=a[i];
    }
    cout<<max<<endl;
    cout<<min<<endl;
    return 0;
}