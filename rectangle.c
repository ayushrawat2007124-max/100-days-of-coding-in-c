/*
Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include<stdio.h>
int main()
{
    int area,perimeter,l,b;
    printf("Enter the values of length and breadth of the rectangle");
    scanf("%d %d",&l,&b);
    area=l*b;
    perimeter=2*(l+b);
    printf("area=%d\n",area);
    printf("perimeter=%d\n",perimeter);
}