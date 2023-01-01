#include <iostream> 
using namespace std;
int main()
{
    char a[50],b[20];
    cin>>a;
    int i,j,k;
    for (i=0;a[i]!='\0';i++)
    ;
    k=i-1;
    for (i=i-1,j=0;j<=k;j++,i--)
    b[j]=a[i];
    b[j]='\0';
    cout<<b;
}