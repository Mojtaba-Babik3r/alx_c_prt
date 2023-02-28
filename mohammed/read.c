#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description : dealing with files
 * Return: Always return 0 (success)
*/
int main(void)
{
	char line[255];
	FILE *fpointer = fopen("employees.txt", "r");

	fgets(line, 255, fpointer);
	/* double this function to read the second line */
	fgets(line, 255, fpointer);
	printf("%s", line);
	fclose(fpointer);
	return (0);
}
