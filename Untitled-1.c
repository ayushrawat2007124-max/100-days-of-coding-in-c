#include<stdio.h>
int main()
{
    int rem,i=1,bin=0;
    float n;
    printf("enter the value of n");
    scanf("%f",&n);
    while(n!=0)
    {
        bin=n%2;
        n=n/2;
        bin=bin+rem*i;
        i=i*10;
    }
    printf("binary=%d",bin);
}