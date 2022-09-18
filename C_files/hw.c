# include<stdio.h>

int main()

{
float score;
char grade;

printf("Enter Score:");
scanf("%f",&score);
if (score >=90) 
{
    grade = 'A';
}
else if(score >=70 && score<90)
{
    grade = 'B';
}
else if(score >=50 && score<70)
{
    grade = 'C';
}
else if(score >=30 && score<50)
{
    grade = 'D';
}

printf("For your score of %f, The Grade assigned is %c.",score,grade);

return 0;
}