#include<iostream>
using namespace std;
bool check(char c,int n,string str)
{
    for (int i=n;i<str.length();i++)
    {
        if (c==str[i])
        return true;
    }
    return false;
}
int main()
{
    string str;
    int i;
    getline(cin,str);
    for (i=0;i<str.length();i++)
    {
        bool x;
        x=check(str[i],i+1,str);
        if (x)
        {
        cout<<str[i];
        break;
        }
        else
        {
            if (i==str.length()-1)
            cout<<"No such element";
        }
    }
    return 0;
}