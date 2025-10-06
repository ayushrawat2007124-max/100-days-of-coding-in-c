/*
Q58: Find the maximum and minimum element in an array.

Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/
#include<stdio.h>
int main()
{
    int n,i,max,min;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements in the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=min=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
      if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("maximum element=%d\n",max);
    printf("minimum element=%d\n",min);
}