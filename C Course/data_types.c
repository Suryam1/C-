#include <stdio.h>

int main()
{
  char c;            // c is a character variable of 8 bits. May hold value from -128 to 127.
  signed char c1;         // c is a character variable of 8 bits. May hold value from -128 to 127.
  unsigned char c2;    // c is a character variable of 8 bits. May hold value from 0 to 255.
  int i;            // i is a integer variable of 16/32 bits. 
  short int j;        // i will be short integer of 16-bits. 
  long int li;        // li is a long int variable, taking 32-bits.
  float f;            // f is single-precision floating number taking 32-bits
  double    df;        // df is double-precision floating number taking 64-bits
  long double ldf;    // ldf is double-precision floating number taking 80-bits (Largest in size).

  printf("i = %d\n", i);
  
  return 0;
}