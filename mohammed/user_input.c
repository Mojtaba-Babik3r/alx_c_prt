#include <stdio.h>
#include <stdlib.h>

int main()
{
	char name [30];
	int age;
	printf("Enter your name : ");
	fgets(name, 20, stdin);
	printf(" Enter your age : ");
	scanf("%d", &age);
	printf("Hello %sSo you are %d years old\n ", name, age);
	return 0;
}
