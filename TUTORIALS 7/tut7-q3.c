//MODULE - 2, TUTORIALS - 7
//3. Factorial (5!=1*2*3*4*5)
//Compute the factorial of a given number using a while loop.
#include <stdio.h>
int main()
{
    int num;
    int i=1;
    int factorial=1;
    printf("Enter a number to find the factorial:");
    scanf("%d",&num);
    while(i<=num)
    {
        factorial=factorial*i;
        i++;
    }
    printf("The Factorial of %d is %d",num,factorial);
    return 0;
    
}



