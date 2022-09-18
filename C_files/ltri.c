# include<stdio.h>

int main()

{
    int i, j, n;

    printf("Enter the size of triangle you want to print:");
    scanf("%d", &n);

    for(i = n; i > 0; i--)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    
    return 0;
}