#include <stdio.h>

int main()

{
   int a,b;
   int add, sub, mul, div, mod ;

   printf("\nEnter first number:");
   scanf("%d",&a);
   printf("Enter second number:");
   scanf("%d",&b);

   add = a + b;
   sub = a - b;
   mul = a * b;
   div = a / b;
   mod = a % b;

   printf("\nAddition of two num is : %d", add);
   printf("\nDifference of two num is : %d", sub);
   printf("\nProduct of two num is : %d", mul);
   printf("\nQuotient of two num is : %d", div);
   printf("\nRemainder of two num is : %d", mod);

   return 0;
}