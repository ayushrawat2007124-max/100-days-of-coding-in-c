/*
Q4: Write a program to calculate the area and circumference of a circle given its radius.
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include<stdio.h>
int main()
{
float rad;
float area,circumference;
printf("Enter the radius of the circe=");
scanf("%f",&rad);
area=(3.14*rad*rad);
circumference=(2*3.14*rad);
printf("area of circle=%f\n",area);
printf("circumference of circle=%f\n",circumference);
}
