#include<stdio.h>
int main()
{
    int arr[100], i, j, num, temp;
    printf("Enter the size of arr:\n");
    scanf("%d" , &num);
    for(i=0;i<num;i++)
    { 
    printf("Enter element %d of the arr: \n");
    scanf("%d",&arr[i]);
    }
    for(i=0;i<(num-1);i++)
    {
        for(j=0; j<(num-1);j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr [j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("All array elements sorted successsfully\n");
    for(i=0;i<num;i++)
    {
    printf("%d", arr[i]);
    }
    return 0;
    
}
