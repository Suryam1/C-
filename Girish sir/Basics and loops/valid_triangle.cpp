#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three angles a,b and c:"<<endl;
    cin>>a>>b>>c;
    if(a+b+c==180)
    {
        cout<<"Triangle is a valid triangle"<<endl;
    }
    else{
        cout<<"Triangle is not valid"<<endl;
    }
    return 0;
}