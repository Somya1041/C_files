# include<stdio.h>

main()
{
    int n=1, sum=0;
    while(n<=100)
    {
        printf("\n%d",n);
        sum=sum+n;
        n=n+1;
    }

    printf("\n\n%d",sum);
    return 0;
}