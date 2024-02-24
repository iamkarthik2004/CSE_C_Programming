//TUTORIALS - 3, MODULE - 2
//QN 1
//1.write a C program to read an integer number from keyboard and find the square of the number.

#include <stdio.h>
int main()
{
    int num;
    int square;
    
    //Displaying Enter integer number
    printf("Enter an integer number:");
    scanf("%d", &num);
    
    //Displaying Square
    square = num*num;
    printf("The Square of the %d is %d", num, square);
    return 0;
}
