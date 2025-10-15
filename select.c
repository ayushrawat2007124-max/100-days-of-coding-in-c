#include<stdio.h>
int selection(int a,float h)
{
    if(a < 25 && h > 5)
    {
        printf("candiate is selected");
    }
    else
    {
        printf("candiate is not selected");
    }
    return 0;
}
int main()
{
    int age;
    float height;
    printf("enter the age");
    scanf("%d",&age);
    printf("enter the height ");
    scanf("%f",&height);
    selection(age,height);
    return 0;
}