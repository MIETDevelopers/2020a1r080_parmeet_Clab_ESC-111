#include <stdio.h>
int main()
{
   int first, second, add, subtract, multiply, mod;
   float divide;
 
   printf("Enter two integers\n");
   scanf("%d%d", &first, &second);
 
   add = first + second;
   subtract = first - second;
   multiply = first * second;
   divide = first / (float)second; 

   printf("Sum = %d\n", add);
   printf("Difference = %d\n", subtract);
   printf("Multiplication = %d\n", multiply);
   printf("Division = %f\n", divide); 
   printf("Modulus = %d\n", mod);
 
   return 0;
}