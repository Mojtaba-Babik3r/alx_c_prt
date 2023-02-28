#include <stdio.h>
#include <stdlib.h>

/*
 * max : a function that take two parameters and return
 * the biggest number
*/
int max(int num1, int num2, int num3)
{
	int result;

	if (num1 >= num2 && num1 >= num3)
	{
		result = num1;
	} else if  (num2 >= num1 && num2 >= num3)
	{
		result = num2;
	} else
	{
		result = num3;
	}
	return (result);
}

/*
 * main : program starting point
 * return : end of program
*/
int main(void)
{
	printf("%d\n", max(20, 10, 15));
	return (0);
}


