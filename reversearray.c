
/*
Q62: Reverse an array without taking extra space.

Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/
#include<stdio.h>
int main()
{
    int n,i,temp=0;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements in the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    printf("Reversed array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
