#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description : dealing with files
 * Return: Always return 0 (success)
*/
int main(void)
{
	FILE *fpointer = fopen("employees.txt", "w+");

	fprintf(fpointer, "Jim, Salseman\nPam, Receptionist\nOscar, Accounting\n");
	fclose(fpointer);
	return (0);
}
