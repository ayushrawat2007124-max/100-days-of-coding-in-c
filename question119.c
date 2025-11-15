
/*
Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/
#include <stdio.h>
 int main()
 { 
    int n,m=0,flag=1,t=0;
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
 for(int i=0;i<n;i++)
 {
     t=0;
    for(int j=0;j<n;j++)
    {
        if(a[i]==a[j])
        {
             t++; 
             
        }
    }

    if(t>1)
    { 
         m=a[i];
        flag=0;
        break;
    }
 }

 if(flag==0)
 {
    printf("repeated element%d",m);
 }
 return 0;
}
