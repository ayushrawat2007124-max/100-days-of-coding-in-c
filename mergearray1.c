
/*
Q63: Merge two arrays.
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include<stdio.h>
int main()
{
    int n,i,n2;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int arr1[n];
    printf("enter the elements in the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
     printf("enter the size of the array:");
    scanf("%d",&n2);
    int arr2[n2];
    printf("enter the elements in the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr2[i]);
    }
    int merged[n+n2];
    for(i=0;i<n;i++)
    {
          merged[i]=arr1[i];
    }
    for(i=0;i<n2;i++)
    {
        merged[n+i]=arr2[i];
    }
    printf("modified array:");
    for(i=0;i<n+n2;i++)
    {
        printf("%d",merged[i]);
    }
    return 0;
}