#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description : dealing with files
 * Return: Always return 0 (success)
*/
int main(void)
{
	FILE *fpointer = fopen("employees.txt", "a+");

	fprintf(fpointer, "Kelly, Customer Service\n");
	fclose(fpointer);
	return (0);
}
