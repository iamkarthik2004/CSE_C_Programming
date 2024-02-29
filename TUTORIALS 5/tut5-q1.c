//1. Write a C program to read the age of a candidate and determine whether he/she is eligible to cast his/her vote. (Use if-else)
// a. Test Data: 21
//b. Expected Output: Congratulations! You are eligible to cast your vote
#include <stdio.h>
int main()
{
    int age;
    printf("Enter Your Age:");
    scanf("%d", &age);
    
    if (age>=18)
    {
        printf("Congratulations! You are eligible to cast your vote");
        
    }
    else
    {
        printf("Sorry! You are not eligible to cast your Vote");
    }

return 0;
}
