#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * main: using for loop
 * Return: always return 0 (success)
*/
int main(void)
{
	int index[] = {4, 8, 15, 16, 23, 42};
	int i;

	for (i = 0; i <= 5; i++)
	{
		printf("%d\n", index[i]);
	}

	return (0);
}
