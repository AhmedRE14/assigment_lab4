/*Write a C program that takes an integer and prints out the month name that
matches the entered integer using if-else or switch */
#include <stdio.h>

int main(int argc, char *argv[])
{
//declratin
int x;
char months [12][30]={"1-Muharram","2-Safar","3-Rabi' al-Awwal","4-Rabi' al-Thani","5-Jumada al-Awwal","6-Jumada al-Thani","7-Rajab","8-Sha'ban","9-Ramadan","10-Shawwal","11-Dhu al-Qidah","12-Dhu al-Hijjah"};


//input
printf("Enter the Number of the mounth from 1-12 \n");
scanf("%d",&x);
switch (x)
{
case 1:
    printf("%s\n",months[0]);
    break;
case 2:
    printf("%s\n",months[1]);
    break;
case 3:
    printf("%s\n",months[2]);
    break;
case 4:
    printf("%s\n",months[3]);
    break;
case 5:
    printf("%s\n",months[4]);
    break;
case 6:
    printf("%s\n",months[5]);
    break;
case 7:
    printf("%s\n",months[6]);
    break;
case 8:
    printf("%s\n",months[7]);
    break;
case 9:
    printf("%s\n",months[8]);
    break;
case 10:
    printf("%s\n",months[9]);
    break;
case 11:
    printf("%s\n",months[10]);
    break;
case 12:
    printf("%s\n",months[11]);
    break;

default:
    printf("WORNG VALUE\n");
    break;
}

//output




}
