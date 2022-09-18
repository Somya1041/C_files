#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int number,guess,nguesses = 1;
	srand(time(0));//time(0) seconds me time enter krta hai
	number = rand()%100 + 1; //Generates a random no. between 1 and 100
	//Keep running the loop until the no. is guessed
	do
    {
		printf("Guess the number between 1 to 100: ");
		scanf("%d", &guess);

		if(guess < number)
        {
			printf("Higher number please.\n");
		}
		else if(guess > number)
        {
			printf("Lower number please.\n");
		}
		else
        {
			printf("You've guessed it in %d attempts.\n", nguesses);
		}
		nguesses++;	
	}

	while(guess!=number);
    return 0; 
}