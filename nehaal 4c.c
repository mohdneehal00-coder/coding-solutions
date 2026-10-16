#include <stdio.h>
int main()
{
long long n, original, bin = 0;
long long rem, i = 1;

 printf("Enter a decimal number: ");
 scanf("%lld", &n);

 original = n;

 while (n != 0)
 {
 rem = n % 2;
  n = n / 2;
  bin = bin + (rem * i);
  i = i * 10;
  }
printf("%lld in decimal = %lld in binary", original, bin);
  return 0;
  }
