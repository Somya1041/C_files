# include<stdio.h>

int main()
{
    int i=10;
    int *p=&i;
    int **pp=&(*p);

    printf("%d\n",p);
    printf("%d\n",(*p));
    printf("%d\n",&p);

    printf("%d\n",pp);
    printf("%d\n",(*pp));
}