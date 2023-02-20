#include <stdio.h>
#include <stdlib.h>

/*
 * main : the program starting point
 * we will use switch to test diffirant options
 * of one variable and decide according to the value
 * return :program end point
*/
int main(void)
{
	char grade = 'F';

	switch (grade)
	{
		case 'A':
			printf("You did great!\n");
			break;
		case 'B':
			printf("You did good\n");
			break;
		case 'C':
			printf("You did poorly\n");
			break;
		case 'D':
			printf("You did poorly\n");
			break;
		case 'F':
			printf("You failed\n");
			break;
		default:
			printf("No grade\n");
	}
	return (0);
}
