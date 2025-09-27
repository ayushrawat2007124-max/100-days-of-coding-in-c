/*
Q40: Write a program to find the 1’s complement of a binary number and print it.
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>
int main() 
{
    int num, temp, binary = 0, place = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    if (num == 0) 
    {
        printf("Binary: 0\n");
        return 0;
    }
    while (temp > 0) 
    {
        int digit = temp % 2;
        binary = binary + digit * place;
        place = place * 10;
        temp = temp / 2;
    }

    printf("Binary: %d\n", binary);

    return 0;
}