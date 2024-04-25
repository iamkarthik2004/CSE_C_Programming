//LAB 6
//11-04-2024
//EXPERIMENT - 10
//PALINDROME OR NOT USING STRINGS

#include <stdio.h>
#include <string.h>
int main()
{
    char text[30],f=0;
    int i,j,n,flag=0;
    printf("Enter string: ");
    scanf("%s",text);
    n = strlen(text);
    
    for(i=n-1,j=0;j<n/2;i--,j++)
    {
        if(text[i]!=text[j])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("Not Palindrome");
    }
    else
    {
        printf("Palindrome");
    }
    return 0;
}
