#include<stdio.h>

int main() 
{
  int a=10;
  int *p=&a;
  printf("a is in base 10=%d\n in base 8=%o\n in base 16=%x\n in base 16=%X\n Address of a in base 16=%p",a,a,a,a,p);
  return 0;
}