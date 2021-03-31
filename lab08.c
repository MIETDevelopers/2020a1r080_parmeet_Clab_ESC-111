#include <stdio.h>
int main() 
{
    char n;
    int lcase, ucase;
    printf("Enter an alphabet: ");
    scanf("%c", &n);
    
    lcase = (n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u');

    ucase = (n == 'A' || n == 'E' || n == 'I' || n == 'O' || n == 'U');

    if (lcase || ucase)
        printf("It is a vowel.");
    else
        printf("It is a consonant.");
    return 0;
}