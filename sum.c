/*
Q1: Write a program to input two numbers and display their sum.
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/
#include<stdio.h>
int main()
{
    int n,n2,sum=0;
    printf("enter two numbers number  ");
    scanf("%d %d",&n,&n2);
    sum=n+n2;
    printf("sum of two numbers=%d",sum);
}