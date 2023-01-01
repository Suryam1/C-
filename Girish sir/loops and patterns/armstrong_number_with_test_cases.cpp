#include<iostream>
using namespace std;
int main()
{
    int t,n,a,sum=0;
    cout<<"Enter number of test cases"<<endl;
    cin>>t;
    while (t>0)
    {
        cout<<"Enter a number:"<<endl;
        cin>>n;
        a=n;
        while (n>0)
        {
            sum=sum+((n%10)*(n%10)*(n%10));
            n=n/10;
        }
        if (a==sum)
        {
            cout<<a<<" IS ARMSTRONG"<<endl;
        }
        else
        {
            cout<<a<<" IS NOT ARMSTRONG"<<endl;
        }
        t--;
        sum=0;
    }
    return 0;
}