/*
Q18: Write a program to assign grades based on a percentage input.
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/
#include<stdio.h>
int main()
{
  int per;
  printf("enter percentage=");
  scanf("%d",&per);
  if(per<=100 && per>=90)
  {
    printf("Grade A");
  }
  else if(per<=89 && per>=70)
  {
    printf("Grade B");
  }
  else if(per<=69 && per>=60)
  {
    printf("Grade D");
  }
  else
  {
    printf(" Grade F");
  }
}