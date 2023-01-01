#include<iostream>
using namespace std;
bool f(int x);
int main()
{
    int x;
    cin>>x;
    bool result;
    result=f(x);
    if (result==true)
    cout<<x<<" is prime"<<endl;
    else
    cout<<x<<" is not prime"<<endl;
    return 0;
}
bool f(int x)
{
    int i=2;
    bool flag=true;
    while (i<=x/2)
    {
        if (x%i==0)
        {
            flag=false;
            break;
        }
        i++;
    }
    return flag;
}
