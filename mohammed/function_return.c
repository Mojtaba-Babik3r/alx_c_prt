#include <stdio.h>
#include <stdlib.h>

double cube(double num);
int main(){

	printf ("Answer : %f\n", cube(3.00));
	return 0;

}

double cube(double num){

	double result = num * num *num;
	return result;
	printf("Note that this statement will never be printed out because of return breakes out the function");
}

