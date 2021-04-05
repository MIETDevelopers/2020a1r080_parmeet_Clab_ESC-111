#include<stdio.h>
int main()
{ 
  int a[100], i, search, n;
  printf("Enter the num of elements in arr\n");
  scanf("%d", &n);
  
  printf("Enter %d elements:\n",n);
  for(i=0;i<n;++i)
   scanf("%d" ,&a[i]);
  
    printf("Enter element to search:\n",n);
    scanf("%d",&search);

    for(i=0;i<n;++i)
    {
      if(a[i]==search)
      {
       printf("%d is found in location %d\n", search, i);
      break;
      }
    }
    if (i==n)
     printf("Elements not found in array.\n",search);
    return 0;       
}
