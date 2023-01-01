#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter amount you need to withdraw:"<<endl;
    int n;
    float balance;
    cin>>n;
    cout<<"Enter your current balance:"<<endl;
    cin>>balance;
    if (n<balance and n%5==0)
    {
        balance=balance-n-0.50;
        cout<<"New balance is:"<<balance<<endl;
    }
    else{
        cout<<"Balance is:"<<balance<<endl;
    }
    return 0;
}