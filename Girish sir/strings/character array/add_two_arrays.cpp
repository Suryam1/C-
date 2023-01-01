#include <iostream>
using namespace std;
int main()
{
    char a[50],b[50];
    cin>>a;
    cin>>b;
    int i,j;
    for (i=0;a[i]!='\0';i++)
    ;
    for (j=0;b[j]!='\0';j++,i++)
    a[i]=b[j];
    a[i]='\0';
    cout<<a;
}