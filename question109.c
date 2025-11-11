/*
Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

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
 printf("enter size of subarray \n");
    scanf("%d",&m);
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
p=n-1;
while(t!=m)
{
    sum=sum+a[p];
    p--;
    t++;
}
printf("sum=%d",sum);
return 0;
 }
