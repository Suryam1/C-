#include<iostream>
using namespace std;
int main()
{
    int t,n,rev=0;
    cout<<"Enter number of test cases:"<<endl;
    cin>>t;
    while (t>0)
    {
        cout<<"Enter a number:"<<endl;
        cin>>n;
        while (n>0)
        {
            rev=rev*10+n%10;
            n=n/10;
        }
        cout<<"REVERSE = "<<rev<<endl;
        rev=0;
        t--;
    }
    return 0;
}