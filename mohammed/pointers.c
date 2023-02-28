#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description : deal with pointers
 * Return: Always return 0 (success)
*/
int main(void)
{
	int myAge = 30;
	int *pMyAge = &myAge;
	char grade = 'A';
	char *pGrade = &grade;
	double gpa = 3.4;
	double *pGpa = &gpa;

	printf("Age : %d\ngrade : %c\nGPA : %f\n", *pMyAge, *pGrade, *pGpa);
	return (0);
}
