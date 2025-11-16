/*
Q120: Write a program to take a string input. Change it to sentence case.

Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/
#include <stdio.h>
 #include <string.h>
 #include <ctype.h>
 int main()
 { int t=0;  
     char s[50];
    
     
    printf("enter a word\n");
    gets(s);
    int p=strlen(s);
    s[0]=toupper(s[0]);
    for (int i=0;i<strlen(s);i++)
    {
        
      if(s[i]==' ')
      {
        t=i;
      }
      if(t!=0){
      s[t+1]=toupper(s[t+1]);
      }
      
    }
    puts(s);
return 0;
 }


   