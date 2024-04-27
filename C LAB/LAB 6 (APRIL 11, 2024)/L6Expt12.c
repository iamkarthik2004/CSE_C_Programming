//LAB 6
//11-04-2024
//EXPERIMENT - 12
//Read a string (ending with a $ symbol). Store it in an array and count the numebr of vowels, consonants, and spaces



#include <stdio.h>
#include <string.h>
int main()
{
    char X[100];
    int a,b,i=0,j=0,k=0;
    
    printf("Enter the string ending with $:");
    fgets(X,sizeof(X),stdin);
    a=strlen(X);
    for(b=0;b<a;b++)
    {
        char C =X[b];
        if (C == 'A' || C == 'E' || C == 'I' || C == 'O' || C == 'U' || C == 'a' || C == 'e' || C == 'i' || C == 'o' || C == 'u')

        {
            i++;
        }
        else if((C >= 'a' && C <= 'z') || (C >= 'A'&& C <= 'Z'))
        {
            j++;
        }
        else if(C==' ')
        {
            k++;
        }
    }
    printf("Number of Vowels: %d\n",i);
    printf("Number of Consonants: %d\n",j);
    printf("Number of Spaces: %d\n",k);

    return 0;
}
