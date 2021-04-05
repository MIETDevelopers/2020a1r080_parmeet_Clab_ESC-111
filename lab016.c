#include<stdio.h>
int main ()
{
    int size, i, ind, max;

    printf("Enter the size of the array\n ");
    scanf("%d", &size);
    int array[size];

    printf("Enter %d elements of the array\n", size);
     
     for (i = 0; i < size; i++)
     {
  scanf("%d", &array[i]);
     }

    max = array[0] ;

    for (i = 0; i < size; i++)
    {
        if(max < array[i])
        {
            max = array[i];
            ind = i;
        }
    }
        printf("Maximum element present in the given array is %d\n", max);
        printf("index is %d\n", ind);
    

        return 0;
}

