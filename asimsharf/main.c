#include <stdio.h>

int main(void){
    int age, height, weight;

    printf("How old are you? ");
    scanf("%d", &age);

    printf("How tall are you? ");   
    scanf("%d", &height);

    printf("How much do you weigh? ");
    scanf("%d", &weight);
    
    printf("So, you're %d old, %d tall and %d heavy. \n", age, height, weight);
    return 0;
}