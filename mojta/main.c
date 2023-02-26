/* This is a welcoming C program*/
// 4/2/2023   1:24 AM

#include <stdio.h>

int main(){
  char fname[20]; //First name
  char lname[20]; //Last name

  printf("Hello stranger, What's your name!!?\n");
  scanf("%s", &fname); // get the user first name
  printf("I still don't know who you are!!!\n");
  printf("Can you PLEASE inter your last name\n");
  scanf("%s", &lname); // get the user last name
  printf("AAAAAH, now I know you.\nWelcome %s %s, it's been a while\n",fname,lname);

  return 0;
}
  
    
  
