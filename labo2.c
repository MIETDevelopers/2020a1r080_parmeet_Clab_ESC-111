#include<stdio.h>
int main()
{
    float n1, n2, sum, sub, mul, div;
    printf("Enter first number :\n");
    scanf("%f", &n1);
    printf("Enter second number :\n");
    scanf("%f", &n2);

    printf("Addition \n");
    sum = n1 + n2;
    printf("The sum of the given numbers is : %f\n", sum);

    printf("Subtraction \n");
    sub = n1 - n2;
    printf("The subtracted result of the given numbers is : %f\n", sub);

    printf("Multiplication \n");
    mul = n1 * n2;
    printf("The product of the given numbers is : %f\n", mul);
    
    printf("Division \n");
    div = n1/n2;
    printf("The quotient of the given numbers is : %f\n", div);
    return 0;

}