/*
Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include<stdio.h>
int main()
{
    int n,n1,sum,diff,product,quotient;
    printf("enter two numbers");
    scanf("%d%d",&n,&n1);
    sum=n+n1;
    diff=n-n1;
    product=n*n1;
    quotient=n/n1;
    printf("sum=%d\n",sum);
    printf("diff=%d\n",diff);
    printf("product=%d\n",product);
    printf("quotient=%d\n",quotient);
}