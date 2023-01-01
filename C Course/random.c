#include<stdio.h>
void main(){
    int x=50;
    int *ptr;
    ptr=&x;
    ++*ptr;
    printf("%d %d %d",x,*ptr,&x);
}