#include <stdio.h>
 int main()
 {
 long long n, original, octal = 0;
 long long rem, i = 1;

 printf("Enter a decimal number: ");
 scanf("%lld", &n);

 original = n;

 while (n != 0)
 {
rem = n % 8;
n = n / 8;
octal = octal + (rem * i);
i = i * 10;
}
printf("%lld in decimal = %lld in octal", original, octal);
return 0;
}
