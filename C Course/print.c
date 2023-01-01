#include<stdio.h>

int main() 
{
  int a=10;
  char b='b';
  char str[100]="Hello and Welcome.";
  float f=10.4;
  double d=123456.9876;
  long int l=123456789;
  long double ld=28761872.67352;
  printf("int a=%d, char b=%c",a,b);
  printf("\nstr=%s",str);
  printf("\nfloat f=%f, double d=%lf",f,d);
  printf("\nlong int l=%ld, long double ld=%Lf",l,ld);
  return 0;
}