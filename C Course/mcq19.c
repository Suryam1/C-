#include <stdio.h>
int main(){
    int a,b,*p;
    p=&a;
    scanf("%d",p);
    printf("%d\n",*p);
    p=&b;
    scanf("%d",p);
    printf("%d\n",*p);

    a=++*p+a;
    printf("%d %d %d\n",a,b,*p);
}