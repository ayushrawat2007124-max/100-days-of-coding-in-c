
/*
Q56: Read and print elements of a one-dimensional array.
Sample Test Cases:
Input 1:
3
10 20 30
Output 1:
10 20 30

Input 2:
5
1 2 3 4 5
Output 2:
1 2 3 4 5

*/
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the number  elements in an array:");
    scanf("%d",&n);
      int arr[n];
    printf("enter the elements in the array:");
    for(i=0;i<=n;i++)
    {
 scanf("%d",&arr[i]);
    }
    for(i=0;i<=n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}