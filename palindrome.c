/*
Q32: Write a program to check if a number is a palindrome.
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include<stdio.h>
int main()
{
    int n,rev=0,temp=0,store;
    printf("enter a number=");
    scanf("%d",&n);
   store=n;
    while(store!=0)
    {
        temp=store%10;
        rev=rev*10+temp;
        store=store/10;
    }
    if(rev==n)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not palindrome");
    }
}