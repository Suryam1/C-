#include<iostream>
using namespace std;
int f1(int n)
{
    int count=1;
    while (n>9)
    {
        count=count+1;
        n=n/10;
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    cout<<f1(n)<<endl;
    return 0;
}