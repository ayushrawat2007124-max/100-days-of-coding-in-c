/*
Q60: Count positive, negative, and zero elements in an array.
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
#include<stdio.h>
int main()
{
    int n,i,c1=0,c2=0,c3=0;
     printf("enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements in the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
       if(arr[i]>0)
       {
        c1++;
       }
       else if(arr[i]<0)
       {
        c2++;
       }
       else
       {
        c3++;
       }
    }
    printf("positive=%d\n",c1);
    printf("negative=%d\n",c2);
    printf("zero=%d\n",c3);
}