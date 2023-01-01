#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter Character:"<<endl;
    char a;
    cin>>a;
    if (a=='B' or a=='b')
    {
        cout<<"BATTLESHIP"<<endl;
    }
    else if (a=='C' or a=='c')
    {
        cout<<"CRUISER"<<endl;
    }
    else if (a=='D' or a=='d')
    {
        cout<<"DESTROYER"<<endl;
    }
    else if (a=='F' or a=='f')
    {
        cout<<"FRIGATE"<<endl;
    }
    return 0;
}