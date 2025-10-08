/*
Q65: Search in a sorted array using binary search.
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include<stdio.h>
int main()
{
    int n,i,first=0,mid,num;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    int last=n;
    printf("enter the elements in the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the number to be searched:");
    scanf("%d",&num);
    while(first<=last)
    {
        mid=(first+last)/2;
        if(arr[mid]>num)
        {
            first=mid+1;
        }
        else if(arr[mid]==n)
        {
           printf("number found at position=%d",mid+1);
           break;
        }
        else
        {
            last=mid-1;
        }
    }
    if(first>last)
    {
        printf("number not found");
    }
}