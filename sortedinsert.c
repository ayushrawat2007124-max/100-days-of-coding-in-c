/*
Q66: Insert an element in a sorted array at the appropriate position.

Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include<stdio.h>
int main()
{
    int n,i,num,pos,key;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements in the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
                if(arr[j]<arr[j+1])
                {
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
        }
    }
    printf("sorted array");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("enter the value to be inserted at a specific postion");
    scanf("%d %d",&pos,&key);
    for(i=n-1;i>pos;i--)
    {
        arr[i+1]=arr[i];
        arr[pos-1]=key;

    }
    printf("modified array");
    for(i=0;i<n;i++)
    {
        printf("%d \n",arr[i]);
    }
}