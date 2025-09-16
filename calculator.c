/*
Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include<stdio.h>
int main()
{
    int num1,num2,result;
    char op;
    printf("enter a operator");
    scanf("%c",&op);
    printf("enter two numbers=");
    scanf("%d%d",&num1,&num2);
    switch (op)
    {
        case '+':
                   result=num1+num2;
                   printf(" result=%d",result);
                   break;
         case '-':
                   result=num1-num2;
                   printf(" result=%d",result);
                   break;    
         case '*':
                   result=num1*num2;
                   printf(" result=%d",result);
                   break; 
        case'/':
                   result=num1+num2;
                   printf(" result=%d",result);
                   break;
        case '%':
                   result=num1%num2;
                   printf(" result=%d",result);
                   break;   
        default: printf("invalid operator");                                    
    }
}