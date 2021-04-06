#include <stdio.h>
struct student {
    char Name[50];
    int roll;
    float marks;
} s[10];

int main()
{
    int i;
    printf("Enter information of students:\n");

    for (i = 0; i < 5; ++i) {
        s[i].roll = i + 1;
        printf("\nFor roll number%d,\n", s[i].roll);
        printf("Enter Name: ");
        scanf("%s", s[i].Name);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("Displaying Information:\n\n");

    for (i = 0; i < 5; ++i) {
        printf("\nRoll number: %d\n", i + 1);
        printf("Enter Name: ");
        puts(s[i].Name);
        printf("Marks: %.1f", s[i].marks);
        printf("\n");
    }
    return 0;
}