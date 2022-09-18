#include <stdio.h> 

int main()
{
    int a=15;
    int b,c;
    b=++a;
    c=--b;
    printf("Value of A: %d\n",a);
    printf("Value of B: %d\n",b);
    printf("Value of C: %d\n",c);
    return 0;
}