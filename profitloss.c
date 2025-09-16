/*
Q22: Write a program to find profit or loss percentage given cost price and selling price.
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include<stdio.h>
int main()
{
    float profit,loss,cp,sp,per;
    printf("Enter the cost price and the selling price=");
    scanf("%f %f",&cp,&sp);
    if(sp>cp)
    {
        profit=sp-cp;
        per=(profit/cp)*100;
        printf("profit=%f",profit);
        printf("profit percentage=%f",per);
    }
    else if(cp>sp)
    {
        loss=cp-sp;
        per=(loss/cp)*100;
        printf("loss=%f",loss);
        printf("loss percentage=%f",per);
    }
    else
    {
        printf("no profit no loss");
    }
}