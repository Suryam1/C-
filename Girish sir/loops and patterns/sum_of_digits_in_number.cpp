#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter number:"<<endl;
    int n;
    cin>>n;
    int s=0;
    while (n>0)
    {
        s=s+(n%10);
        n=n/10;
    }
    cout<<"The sum is:"<<s<<endl;
    return 0;
}