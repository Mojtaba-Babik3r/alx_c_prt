#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description : Accessing memory address
 * Return: Always return 0 (success)
*/
int main(void)
{
	int myAge = 30;
	char grade = 'A';
	double gpa = 3.4;

	printf("Age : %p\ngrade : %p\nGPA : %p\n", &myAge, &grade, &gpa);
	return (0);
}
