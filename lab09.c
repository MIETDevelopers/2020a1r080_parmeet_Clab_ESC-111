#include <stdio.h>
  int main()
{
    int n;
    float side, base, leng, wid, area, rad, peri;
 
    printf("Press 1 for Circle\n");
    printf("Press 2 for Rectangle\n");
    printf("Press 3 for Square\n");
    printf("\n");
    printf("Enter the option\n");
    scanf("%d", &n);
    switch(n)

    {

    case 1:
        printf("Enter the rad\n");
        scanf("%f", &rad);
        area = 3.14 * rad * rad;
        peri = 2 * 3.14 * rad;
        printf("Area of the circle = %f\n", area);
        printf("Circumference of the circle = %f\n", peri);
        break;

    case 2:
        printf("Enter the leng\n");
        scanf("%f", &leng);
        printf("Enter the wid\n");
        scanf("%f", &wid);
        area = leng * wid;
        peri = 2 * (leng + wid);
        printf("Area of the Rectangle = %f\n", area);
        printf("Peri of the rectangle = %f\n", peri);
        break;
    
    case 3:
        printf("Enter the side\n");
        scanf("%f", &side);
        area = side * side;
        peri = 4 * side;
        printf("Area of the Square=%f\n", area);
        printf("Peri of the square = %f\n", peri);
        break;

    default:
        printf("Wrong option entered\n");
        break;
    }
}