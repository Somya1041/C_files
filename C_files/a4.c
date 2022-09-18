# include<stdio.h>
int main()
{
   int n;
   printf("enter a positive number:");
   scanf("%d",&n);
   int range=n/2;
   int itr=2;
   int flag=0;
   while(itr<range)
   {
       if(n%itr == 0);
       {
           flag=1;
           break;
       }
       itr++;
   }
   if (flag == 0)
   {
       printf("%d is a Prime number.\n",n);
   }
   else
   {
       printf("%d is a Composite number.\n",n);
   }
   if (n == 0 || n == 1)
   {
       printf("%d is neither prime nor composite.\n",n);
   }
   
    return 0;
}