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
    int n;
    cin>>n;
    cout<<f1(n)<<endl;
    return 0;
}