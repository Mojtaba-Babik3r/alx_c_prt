#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * main: buildin a guessing game where the
 * user try to guess a secret number
 * Return: always return 0 (success)
*/
int main(void)
{
	int secretNumber = 5;
	int guess;
	int guessCount = 0;
	int guessLimit = 3;
	int outOfGuesses = 0;

	while (guess != secretNumber && outOfGuesses == 0)
	{
		if (guessCount < guessLimit)
		{
			printf("Enter a number : ");
			scanf("%d", &guess);
			guessCount++;
		} else
		{
			outOfGuesses = 1;
		}
	}
	if (outOfGuesses == 1)
	{
		printf("out of guesses\n");
	} else
	{
		printf("You win!\n");
	}
	return (0);
}
