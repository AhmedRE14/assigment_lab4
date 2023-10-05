/*Write a C program for 3 inputs ( A , B , C ) and find the maximum and the minimum
numbers plus calculate the average ( max , min , avg ) using for-loop and
scanf .*/

#include <stdio.h>

int main(int argc, char *argv[])
{
//int A,B,C;
int num[2];
int max,min,avg;

printf("Enter A,B,C\n");
scanf("%d",&num[0]);//A
scanf("%d",&num[1]);//B
scanf("%d",&num[2]);//C

int i;
max=num[0];
min=num[0];

avg = (num[0]+num[1]+num[2]) / 3;


for( i=0; i<3; i++ ){

if (num[i] > max)
{
     max=num[i];
 }
    

}

for( i=0; i<3; i++ ){

if (num[i] < min)
{
     min=num[i];
 }
    

}


printf("Max:%d\n",max);
printf("Min:%d\n",min);
printf("Avg:%d\n",avg);



}
