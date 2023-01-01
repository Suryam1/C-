#include<iostream>
using namespace std;
int main()
{
    int a[5],sum=0;
    int i;
    for (i=0;i<5;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    cout<<sum<<endl;
    cout<<sum/5<<endl;
    return 0;
}