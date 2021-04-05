#include<stdio.h>
int main()
{
    int a[4][5], i, j;
    printf("Enter elements for matrix of size 4*5\n");

    for(i=0;i<=3;i++)
       for(j=0;j<=4;j++)
    {
        scanf("%d",&a[i][j]);
    }
      printf("Two dimensional array\n");
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=4;j++)
      {
          printf("%4d",a[i][j]);
      }
      printf("\n");
    }
    return 0;   
}