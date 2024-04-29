//LAB 7
//18-04-2024
//EXPERIMENT - 14
//2) Read a string (Word), store it in an array, and obtain it's reverse by using a user-defined function.

#include <stdio.h>
#include <string.h>

void reverse(char word[])
{
    int length = strlen(word);
    
    for(int i =0; i<length/2; i++)
    {
        char ch = word[i];
        word[i]=word[length-i-1];
        word[length-i-1] = ch;
    }
}

int main()
{
    char word[100];
    printf("Enter the word:");
    scanf("%s", word);
    
    reverse(word);
    printf("The reverse string is:%s\n", word);
    return 0;
}

