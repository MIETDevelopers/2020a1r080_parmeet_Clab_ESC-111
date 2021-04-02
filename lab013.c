#include<stdio.h>  
  
int main()  
{  
    int num, count = 2, check = 1;  
  
    printf("Enter a num\n");  
    scanf("%d", &num);  
  
    while(count < num)  
    {  
      if(num%count == 0)  
        {  
         check = 0;  
         break;  
        }  
      count++;  
    }  
  
    if(check) 
    printf("%d is prime number\n", num);  
    else    
     printf("%d is not prime number\n", num);  
  
    return 0;  
}