#include<iostream>
using namespace std;
int main()
{
    int t,n,sum=0;
    cout<<"Enter number of test cases:"<<endl;
    cin>>t;
    while (t>0)
    {
        cout<<"Enter a number:"<<endl;
        cin>>n;
        while (n>0)
        {
            sum=sum+n%10;
            n=n/10;
        }
        cout<<"SUM = "<<sum<<endl;
        sum=0;
        t--;
    }
    return 0;
}