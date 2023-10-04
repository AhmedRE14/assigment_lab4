/*Write a C program for 3 inputs ( A , B , C ) and find the maximum and the minimum
numbers plus calculate the average ( max , min , avg ) using for-loop and
scanf .*/

#include <stdio.h>

int main(int argc, char *argv[])
{
int A,B,C;
int max,min,avg;

printf("Enter A,B,C\n");
scanf("%d",&A);
scanf("%d",&B);
scanf("%d",&C);


avg=(A+B+C)/3;

int i;


for( i=0; i<3; i++ ){


    max=A;
    if (B > max){
         max=B;
    }   
    if (C > max){
         max=C;
    }
}

for( i=0; i<3; i++ ){


    min=A;
    if (B < min){
         min=B;
    }   
    if (C < min){
         min=C;
    }
}

printf("Max:%d\n",max);
printf("Min:%d\n",min);
printf("Avg:%d\n",avg);



}
