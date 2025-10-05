/*
Q39: Write a program to find the product of odd digits of a number.
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include<stdio.h>
int main()
{
    int n,temp=0,product=1,flag=0;
    printf("enter a number");
    scanf("%d",&n);
    while(n!=0)
    {
        temp=n%10;
        if(temp%2!=0)
        {
             product=product*temp;
             flag=1;
             
        }
        n=n/10;
    }
    if(flag==1)
    {
         printf("product=%d",product);
    }
        else
        {
             printf("no odd digitds found");
        }
    
    
}