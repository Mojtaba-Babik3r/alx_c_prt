#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * main: using 2D Arrays
 * Return: always return 0 (success)
*/
int main(void)
{
	int nums[3][2] = {{1, 2}, {3, 4}, {5, 6}};
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d, ", nums[i][j]);
		}
		printf("\n");
	}

	return (0);
}
