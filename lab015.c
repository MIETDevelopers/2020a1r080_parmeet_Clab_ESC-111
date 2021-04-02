#include<stdio.h>
int main()
{
int n, num, r, sum=0;

printf("Enter a positive integer: ");
scanf("%d", &num);
n=num;
while(n>0)
{
r = n%10;
sum = sum+r*r*r;
n = n/10;
}
 
if(sum == num)
printf("%d is an Armstrong number.",num);
else
printf("%d is not an Armstrong number.",num);
return 0;
}