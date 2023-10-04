/*Write a C program that takes your full name, age, and address using the command
prompt or scanf then prints all information in a nice appropriate format.*/
#include <stdio.h>

int main(int argc, char *argv[])
{
//declration
char Name[50];
int Age;
char Address[50];
//input
printf("Enter your full Name:\n");
scanf("%[^\n]s",&Name);

printf("Enter your Age:\n");
scanf("%d",&Age);

getchar();// Consume the newline character got help form bard for this line not 100% sure how it works(the getchar() function reads a single character from the input buffer. In this case, it is used to consume the newline character that is left in the input buffer after the user enters their age. This ensures that the third scanf() call will read the user's address correctly.)

printf("Enter your address:\n");

scanf("%[^\n]s",&Address);

//output
printf("	OUTPUT		\n");
printf("Name:%s\n",Name);
printf("Age:%d\n",Age);
printf("Address:%s\n",Address);
return 0;
}

