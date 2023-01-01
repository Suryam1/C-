#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int x;
    float y;
    cin>>x>>y;
    if (x>y || (x%5)!=0)
    {
    cout<<fixed;
    cout<<setprecision(2);
    cout<<y;
    }
    else
    {
        if (y>(x+0.5))y=y-x-0.5;
        {
            cout<<fixed;
            cout<<setprecision(2);
            cout<<y;
        }
    }
    return 0;
}