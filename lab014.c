#include<stdio.h>
int main()
{
  int Num, R, Sum=0;
  printf("Enter any num\n");
  scanf("%d", &Num);
  while(Num > 0)
  {
     R = Num % 10;
     Sum = Sum + R;
     Num = Num / 10;
  }

  printf("Sum of the digits of Given Num = %d", Sum);
  return 0;
}
