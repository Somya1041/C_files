# include <stdio.h>

int main()

{  
   float sum,sub,mult,div;
   int a,b,mod,ch;

   printf("\nThis is a simple calculator that I have made.\n");

   printf("\nEnter first number:");
   scanf("%d",&a);

   printf("Enter second number:");
   scanf("%d",&b);

   printf("\nPress 1 for Addition.");
   printf("\nPress 2 for Subtraction.");
   printf("\nPress 3 for Multiplication.");
   printf("\nPress 4 for Division.");
   printf("\nPress 5 for Floar Division.\n");

   printf("\nSelect from above choices.");

   printf("\n\nEnter choice:");
   scanf("%d",&ch);

   printf("\n");

   if(ch == 1)
   {
       sum = a + b;
       printf("Sum:%f",sum);
   }
       else
       {
           if(ch == 2)
           {
               sub = a - b;
               printf("Difference:%f",sub);
           }
           else
           {
               if(ch == 3)
               {
                   mult = a * b;
                   printf("Product:%f",mult);
               }
               else
               {
                   if(ch == 4)
                   {
                       div = a / b;
                       printf("Quotient:%f",div);
                   }
                   else
                   {
                    if(ch == 5)
                    {
                        mod = a % b;
                        printf("Remainder:%d",mod);
                    }
                    else
                   {
                       printf("Invalid Option.");
                   }
               }
           }
       }
    }   
    return 0;
}