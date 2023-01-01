#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter three numbers a,b and c:"<<endl;
    int a,b,c,sum;
    float average;
    cin>>a>>b>>c;
    sum=a+b+c;
    average=sum/3;
    cout<<"So average of three numbers is:"<<average<<endl;
    return 0;
}