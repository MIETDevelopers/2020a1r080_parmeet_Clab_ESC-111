#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fptr, *fptr2;
    char ch;
    printf("Copying contents of one file to another file \n");
    fptr = fopen("assignment2.txt", "r");
    if (fptr == NULL){
        printf("File can not be opened! \n");
    }
    fptr2 = fopen("assignment2_copy.txt", "w");
    if (fptr2 == NULL){
        printf("File can not be opened! \n");
    }
    ch = fgetc(fptr);
    while (ch != EOF){
        fputc(ch, fptr2);
        ch = fgetc(fptr);
    }
    printf("LOADING!! Copying contents... \n");
    printf("SUCCESSFULLY COPIED CONTENTS OF ONE FILE TO ANOTHER!! \n");
    fclose(fptr);
    fclose(fptr2);
    return 0;
}