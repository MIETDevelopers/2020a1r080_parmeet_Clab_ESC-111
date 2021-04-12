#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct emp {
    char name[25];
    int age;
    float salary;
};

int comparator(const void* p, const void* q)
{
    return strcmp(((struct emp*)p)->name,
                  ((struct emp*)q)->name);
}


int main()
{
    int i = 0, n = 10;

    struct emp arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter Name \n");
        scanf("%s",&arr[i].name);
        printf("Enter age \n");
        scanf("%d",&arr[i].age);
        printf("Enter Salary \n");
        scanf("%f",&arr[i].salary);
    }

    printf("Unsorted data \n");
    for (i = 0; i < n; i++) {
        printf("age = %d, Name = %s, Salary = %f \n", arr[i].age, arr[i].name, arr[i].salary);
    }
    qsort(arr, n, sizeof(struct emp), comparator);


    printf("sorted data by Name: \n");
    for (i = 0; i < n; i++) {
        printf("age = %d, Name = %s, Salary = %f \n",
               arr[i].age, arr[i].name, arr[i].salary);
    }

    return 0;
}
