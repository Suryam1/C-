#include <iostream>
using namespace std;
int main()
{
    char a[50],b[20];
    cin>>a;
    int i;
    for (i=0;a[i]!='\0';i++)
    b[i]=a[i];
    b[i]='\0';
    cout<<b;
    return 0;
}