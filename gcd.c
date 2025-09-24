/*
Q36: Write a program to find the HCF (GCD) of two numbers.
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include<stdio.h>
int main()
{
    int n,n2,temp;
    printf("enter 2 numbers=");
    scanf("%d%d",&n,&n2);
    while(n2!=0)
    {
        temp=n2;
        n2=n%n2;
        n=temp;
    }
     printf("HCF (GCD) is: %d\n", n);

}
