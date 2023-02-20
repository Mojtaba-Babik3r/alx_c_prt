#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * struct : a container that has diffirent data types in it
*/
struct Student
{
	char name[50];
	char major[50];
	int age;
	double gpa;
};
/*
 * main : starting point of a program
 *
 * use struct to represent diffirent type of data
 *
 * return : end point of the program
*/
int main(void)
{
	struct Student student1;
	struct Student student2;

	student1.age = 22;
	student1.gpa = 3.2;
	strcpy(student1.name, "Mohammed");
	strcpy(student1.major, "MIS");
	student2.age = 24;
	student2.gpa = 3.5;
	strcpy(student2.name, "Malik");
	strcpy(student2.major, "AIS");
	printf("%f\n", student1.gpa);
	printf("%d\n", student1.age);
	printf("%s\n", student1.name);
	printf("%s\n", student1.major);
	printf("%f\n", student2.gpa);
	printf("%d\n", student2.age);
	printf("%s\n", student2.name);
	printf("%s\n", student2.major);


	return (0);
}

