/*
Q38: Write a program to find the sum of digits of a number.
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include<stdio.h>
int main()
{
    int n,temp,sum=0;
    printf("enter a number= ");
    scanf("%d",&n);
    while(n!=0)
    {
        temp=n%10;
        sum=sum+temp;
        n=n/10;
    }
    printf("sum=%d",sum);
}