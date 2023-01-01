#include <iostream>
using namespace std;
int main()
{
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    char t;
    t=str1[1];
    str1[1]=str2[1];
    str2[1]=t;
    cout<<str1<<str2<<endl;
}