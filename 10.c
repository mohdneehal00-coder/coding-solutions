#include <stdio.h>
#include <math.h>
int main()
{
long binarynum;
int decimalnum = 0, temp = 0, remainder;
 printf("Enter a binary number: ");
  scanf("%ld", &binarynum);
  while (binarynum != 0)
  {
  remainder = binarynum % 10;
  binarynum = binarynum / 10;
  decimalnum = decimalnum + remainder * pow(2, temp); temp++;
  }
  printf("Equivalent decimal number is: %d", decimalnum);
  return 0;
  }
