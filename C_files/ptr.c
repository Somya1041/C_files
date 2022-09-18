#include<stdio.h>

int main()
{
    int i=10;
    printf("%d\n",&i);
    int *ptr=&i;
    printf("%d\n",ptr);
    (*ptr)++;
    printf("%d\n",(*ptr));
    return 0;
}