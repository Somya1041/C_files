# include <stdio.h>
int main()
{
    int i=1;
    for(i=1;i<=7;i++)
    {
        if(i==5)
        break;
    }    
    printf("%d\n",i);
    printf("Out of loop.");
    return 0;
}