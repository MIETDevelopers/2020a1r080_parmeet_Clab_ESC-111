#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ptr;

    char ch;
    int character = 0, words = 0, lines = 0, ws = 0;

    ptr = fopen("lab_assignment.txt", "r");

    if (ptr == NULL)
    {
        printf("\n Unable to open file.\n");
    }

    while ((ch = fgetc(ptr)) != EOF)
    {
        character++;

        if (ch == '\n' || ch == '\0')
            lines++;

        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
            words++;

        if (ch == ' ')
            ws++;
    }

    if (character > 0)
    {
        words++;
        lines++;
    }

    printf("\n");
    printf("Total characters = %d\n", character);
    printf("Total words  = %d\n", words);
    printf("Total lines  = %d\n", lines);
    printf("Total Whitespaces  = %d\n", ws);

    fclose(ptr);

    return 0;
}