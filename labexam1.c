#include<stdio.h>

int main()
{
    int num, i = 1, c = 0;
    
    printf("Enter a num\n");
    scanf("%d",&num);

    while(i<=num)
    {
        if(num%i == 0)
        c++;
        i++;
        
    }

    if (c==2)
    printf("%d is prime number\n",num);
    else
    printf("%d is not a prime number\n",num);

    return 0;
    
}