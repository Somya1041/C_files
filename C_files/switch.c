# include<stdio.h>

int main()

{
    float sum,sub,mult,div;
    int a,b,mod,i;

    printf("\nThis is a simple calculator made by switch case.\n");

    printf("\nEnter the first number:");
    scanf("%d",&a);

    printf("Enter the second number:");
    scanf("%d",&b);

    printf("\nPress 1 for Addition.");
    printf("\nPress 2 for Subtraction.");
    printf("\nPress 3 for Multiplication.");
    printf("\nPress 4 for Division.");
    printf("\nPress 5 for Floar Division.\n");

    printf("\nSelect from above choices.\n");

    printf("\nSelect Choice:");
    scanf("%d", &i);

    switch(i)
    {
        case 1:
        sum = a + b;
        printf("\nSum:%f",sum);
        break;

        case 2:
        sub = a - b;
        printf("\nDifference:%f",sub);
        break;

        case 3:
        mult = a * b;
        printf("\nProduct:%f",mult);
        break;

        case 4:
        div = a / b;
        printf("\nQuotient:%f",div);
        break;

        case 5:
        mod = a % b;
        printf("\nRemainder:%d",mod);
        break;

        default:
        printf("!!Invalid Choice.!!");
        break;
    }
    
    return 0;
}