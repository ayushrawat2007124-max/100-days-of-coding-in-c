/*
Q27: Write a program to print the sum of the first n odd numbers.
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25


*/
#include<stdio.h>
int main()
{
    int n,i=1,sum=0;
    printf("enter the value of n=");
    scanf("%d",&n);
    for(i=1;i<=n;i+=1)
    {
      sum=sum+(2*i-1);
        
    }
    printf("sum=%d",sum);
}
    
   

    