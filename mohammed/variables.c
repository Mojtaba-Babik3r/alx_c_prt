#include <stdio.h>
#include <stdlib.h>

int main()
{
	char myName [] = "Mohammed Saeed";
	int myAge = 30;
	double grade = 80.6;
	char grades = 'A';
	printf ("Hello! My name is %s I 'm %d years old , My graduate grade at high school was %f am never interested in getting an %c "                        

	,myName,myAge,grade,grades);
	myAge = 31;
	printf("\nnext june I will turn %d",myAge);
	return 0;
}
