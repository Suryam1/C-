#include <iostream>
using namespace std;
int main()
{
    string str;
    string str2;
    getline(cin,str);
    getline(cin,str2);
    cout<<"addition of two strings "<<str+str2<<endl;
    cout<<"size of str "<<str.size()<<endl;
    cout<<"size of str2 "<<str2.size()<<endl;
    string temp;
    temp=str;
    str=str2;
    str2=temp;
    cout<<"After swaping str "<<str<<" and str2 "<<str2<<endl;
}