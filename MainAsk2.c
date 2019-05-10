#include <stdio.h>
#include <stdlib.h>


int tries, choice, secretMax, secretNumber, maxTries, Guess , lastMin , lastMax;

int main(int argc, char *argv[]) {
	srand(time(NULL));
	do 
	{
		printf("Secret Number\n\n");
		printf("The secret number is from 1 to : ");
		do
		{
			scanf("%d", &secretMax);
	    }while (secretMax<100);
	    
	    lastMin = 1;
	    lastMax = secretMax;
	    
	    secretNumber=rand()%secretMax+1;
	    
	    do
		 {
		 	printf("Max number of tries : ");
	    	scanf("%d", &maxTries);
	    	if (maxTries < 3 )
	    	{
	    		printf("The number of tries must be greater than %d", maxTries);
			}
		 }while (maxTries < 3);
	    	
	    	printf("=====NEW GAME=====\n\nEnter a guess between %d and %d : ", lastMin, lastMax);
	    	tries = 0;
	    	do
			{
				scanf("%d", &Guess);
				tries++;
				
				
				if (Guess < secretNumber && Guess != secretNumber)
				{
					lastMin = Guess;
					printf("The secret number is greater than your guess !\nEnter a guess between %d and %d : ", lastMin, lastMax);
				}
				else if (Guess > secretNumber && Guess != secretNumber)
				{
					lastMax = Guess;
					
					printf("The secret number is lower than your guess !\nEnter a guess between %d and %d : ", lastMin, lastMax);
				}
				else 
				{
					printf("Congratulations! You got it in %d tries\n", tries);
					break;	
				}
			} while (tries < maxTries);
			
			if (Guess != secretNumber)
			{
				printf("Sorry, you lose, no more tries\n\nThe secret number was %d\n", secretNumber);
			}
			
			do
			{
			
				printf("1.New Game\n2.Exit\n\nType your choice : ");
			
			
			 	scanf("%d", &choice);	
			} while (choice != 1 && choice != 2);
			
			if ( choice ==2)
			{
				exit(0);	
			}	
	} while(1);
	
	
	return 0;
}
