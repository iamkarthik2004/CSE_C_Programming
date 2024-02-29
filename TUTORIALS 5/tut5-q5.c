//MODULE 2, TUTORIALS 5
//5. Write a C Program to check whether a given number is less than 100. if so check whether it is odd or even.Otherwise display the result as “it is a positive number greater than 100”. (Use Nested if)

#include <stdio.h>
int main ()
{
    int number;
    printf("Enter a number");
    scanf("%d", &number);
    
    if (number<100)
    if (number % 2 == 0)
    {
        printf("The number %d is less than 100 and even", number);
    }
    else
    {
        printf("The number %d is less than 100 and odd", number);
    }
    else 
    {
        printf("The number %d is positive and greater than or equal to 100", number);
    }

    return 0;
}
