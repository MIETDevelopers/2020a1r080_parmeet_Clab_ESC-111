#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    int n;
    //Use of malloc
    
    printf("Enter the size of the array you want to create\n");
    scanf("%d", &n);

    
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n",i);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array id %d\n",i, ptr[i]);
    }
    

    //Use of calloc
     printf("Enter the size of the array you want to create\n");
    scanf("%d", &n);

    ptr = (int *)calloc(n , sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n",i);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array id %d\n",i, ptr[i]);
    }
    

    //use of realloc
    printf("Enter the new size of the array you want to create\n");
    scanf("%d", &n);

    ptr = (int *)realloc(ptr, n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n",i);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array id %d\n",i, ptr[i]);
    }
     // Free the memory
    free(ptr);                                   
    printf("\nMalloc Memory successfully freed.\n");   
    printf("\nMemory successfully allocated using calloc.\n");
    for (int i = 0; i < n; ++i) 
    {
        ptr[i] = i + 1;
    }

    return 0;
}