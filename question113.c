/*
Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.

Sample Test Cases:
Input 1:
arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
Output 1:
5

Input 2:
arr[] = [7, 10, 4, 3, 20, 15], k = 3
Output 2:
7

*/
#include <stdio.h>
 int main()
 {
    int n=0,t=0,m=0,p=0,temp=0,sum=0;
    printf("enter size of array \n");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
 {
    scanf("%d",&a[i]);

 }
 
 for(int i=0;i<n;i++)
 {
    printf("%d  ",a[i]);

 }
 printf("\n");


for(int i=0;i<n;i++)
{
    for(int j=0;j<n-1-i;j++)
    {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
}
printf("enter kth position for kth smallest element \n");
    scanf("%d",&m);
    printf("%d \n",a[m-1]);
    return 0;
}



    