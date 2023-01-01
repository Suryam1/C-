#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter number you want to check:"<<endl;
    int n;
    int a;
    cin>>n;
    for (int i=2;i<n;++i)
    {
        if (n%i==0)
        {
            cout<<"NOT PRIME"<<endl;
            a=1;
            break;
        }
    }
    if (a!=1)
    {
        cout<<"PRIME"<<endl;
    }
    return 0;
}