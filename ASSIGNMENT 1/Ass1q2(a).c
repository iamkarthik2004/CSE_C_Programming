//C Programming - ASSIGNMENT 1
//2] (a) Write a C program to print Upper Half of a Pyramid
#include <stdio.h>
int main()
{
    int rows, space, i, j;
    printf("Enter the number of Rows:");
    scanf("%d", &rows);
    
    for(i=1; i<=rows; i++)
    {
        //print Spaces
        for(space=1; space<=rows-i; space++)
        {
            printf(" ");
        }
        //print stars
        for(j=1; j<=2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
