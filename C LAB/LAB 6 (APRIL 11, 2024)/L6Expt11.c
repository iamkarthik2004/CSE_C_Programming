//LAB 6
//11-04-2024
//EXPERIMENT - 11
//Read two string (each one ending with a $ symbol), store them in arrays and concatenate them without using library functions

#include <stdio.h>
#include <string.h>
void main()
{
    char a[100],b[100],c[100];
    int i=0,j=0;
    
    printf("Enter the first String ending with$: ");
    fgets(a,sizeof(a),stdin);
    a[strcspn(a,"\n$")]='\0';
    
    printf("Enter the second String ending with$: ");
    fgets(b,sizeof(b),stdin);
    b[strcspn(a,"\n$")]='\0';
    while(a[i]!='\0')
    {
        c[i]=a[i];
        i++;
    }

    c[i] = ' ';
    i++;

    while(b[j]!='\0')
    {
        c[i]=b[j];
        i++;
        j++;
    }
    c[i]='\0';
    printf("Concatenated string: %s\n",c);
}
