#include<stdio.h>
int main()
{
    float rad, side, leng, wid, area1, area2, area3, per1, per2, per3;

    printf("For circle\n");
    printf("enter radius:\n");
    scanf("%f", &rad);
    area1= 3.14*rad*rad;
    per1= 2*3.14*rad;

    printf("For square\n");
    printf("enter side:\n");
    scanf("%f", &side);
    area2= side*side;
    per2= 4*side;

    printf("For rectangle\n");
    printf("enter length:\n");
    scanf("%f", &leng);
    printf("enter width:\n");
    scanf("%f", &wid);
    area3= leng*wid;
    per3= 2*(leng+wid);

    printf("The area of circle is: %f\n", area1);
    printf("The perimeter of circle is: %f\n", per1);
    printf("The area of square is: %f\n", area2);
    printf("The perimeter of square is: %f\n", per2);
    printf("The area of rectangle is: %f\n", area3);
    printf("The perimeter of rectangle is: %f\n", per3);
  
    return 0;

}