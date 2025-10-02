/*
Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4
*/
#include <stdio.h>
int main() 
{
    int n, i;
    float sum = 0.0;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    int num = 1;   
    int den = 1;   
    for (i = 1; i <= n; i++)
    {
        if (i == 1) 
        {
            sum += 1;   
        } else {
            num = 2 * i - 1;  
            den = 2 * i;       
            sum += (float) num / den;
        }
    }
    printf("Sum of series up to %d terms = %.4f\n", n, sum);
    return 0;
}