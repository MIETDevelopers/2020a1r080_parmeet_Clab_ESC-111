#include<stdio.h>
#include <string.h>

int main()
{
    char string[100];
    int i, len, check;
    check = 0;
     
     printf("Enter a string");
     scanf("%s", string);

     len = strlen(string);

     for(i=0; i<len; i++)
     {
     if(string[i] != string[len-i-1])
     {
         check = 1;
         break;
     }
     }
     if (check)
     {
         printf("%s is not a palidrome", string);
     }
     else{
         printf("%s is a palidrome", string);
     }
     return 0;
}    
