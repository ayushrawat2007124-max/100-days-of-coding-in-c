/*
Q33: Write a program to check if a number is an Armstrong number.
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include<stdio.h>
int main()
{
    int n,temp=0,sum=0,store;
    printf("enter a number ");
    scanf("%d",&n);
    store=n;
    while(store!=0)
    {
        temp=store%10;
        sum=sum+(temp*temp*temp);
        store=store/10;
    }
    if(n==sum)
    {
        printf("armstrong");
    }
    else
    {
        printf("Not armstrong");
    }
}