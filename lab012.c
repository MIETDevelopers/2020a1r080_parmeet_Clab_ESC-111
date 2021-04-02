#include<stdio.h>
int main()
{
  int n, num, i, max=0;
  printf("Enter how many numbers: \n");
  scanf("%d", &n);
  for(i=2;i<=n;++i)
  {
    printf("enter num:\n");
    scanf("%d", &num);
    if(num>max)
    max=num;
  }
  
  printf("\n The largest num is: %d", max);
  return 0;

}