/*Write a C program that calculates the number of seconds in a given amount of
hours, enter the number via command prompt.(note use the argc,argv)*/
#include <stdio.h>

int main(int argc, char *argv[])
{

int hours = atoi(argv[1]);

printf( "%d\n" , ( hours *60*60 ) );

    return 0;

}
