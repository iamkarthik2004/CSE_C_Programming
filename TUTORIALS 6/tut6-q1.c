//MODULE 2, TUTORIALS - 6
//Switch statement
//1. Create a C program that asks the user to enter a character. If the entered character is a vowel (a, e, i, o, u), print "Vowel". Otherwise, print "Consonant".
#include <stdio.h>
int main()
{
    char character;
    
    printf("Enter a character:");
    scanf("%c", &character);
    
    switch (character)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        printf("Vowel\n");
        break;
    default:
    printf("Consonant\n");
    }
    
    return 0;
}
