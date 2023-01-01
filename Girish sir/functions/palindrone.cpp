#include<iostream>
using namespace std;
int f1(int n)
{
    int sum=0;
    while (n>0)
    {
        sum=sum*10+n%10;
        n=n/10;
    }
    return sum;
}
int main()
{
    int n,a;
    cin>>n;
    a=f1(n);
    if (a==n)
    cout<<n<<" is palindrone"<<endl;
    else
    cout<<n<<" is not palindrone"<<endl;
    return 0;
}