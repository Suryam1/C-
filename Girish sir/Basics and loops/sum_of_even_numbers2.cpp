#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter a number:"<<endl;
    int n;
    cin>>n;
    int i=1;
    int sum=0;
    while (i<=n)
    {
        if (i%2==0)
        {
            sum=sum+i;
        }
        i=i+1;
    }
    cout<<"Sum is:"<<sum<<endl;
    return 0;
}