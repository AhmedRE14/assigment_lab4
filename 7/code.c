/*Write a C program that prints grades of 10 students along with their names using
struct.*/
#include <stdio.h>

struct Student{
char Name[50];
int Grades;



};


int main(int argc, char *argv[])
{
 struct Student student [9];


    strcpy(student[0].Name,"Ahmed");
    student[0].Grades = 99;

    strcpy(student[1].Name,"Mohmmad");
    student[1].Grades = 80;

    strcpy(student[2].Name,"Ali");
    student[2].Grades = 88;

    strcpy(student[3].Name,"Turky");
    student[3].Grades = 100;

    strcpy(student[4].Name,"Talal");
    student[4].Grades = 96;

    strcpy(student[5].Name,"Alex");
    student[5].Grades = 66;

    strcpy(student[6].Name,"Jammes");
    student[6].Grades = 100;

    strcpy(student[7].Name,"Gon");
    student[7].Grades = 50;

    strcpy(student[8].Name,"Adam");
    student[8].Grades = 40;

    strcpy(student[9].Name,"Sohib");
    student[9].Grades = 100;

int i;
for ( i = 0; i < 10; i++){

        printf("\nStudent Number %d\n",i+1);

        printf("Student name: %s\n", student [i].Name);
        printf("Student grades: %d\n", student [i].Grades);

    }

    return 0;
 }

  







