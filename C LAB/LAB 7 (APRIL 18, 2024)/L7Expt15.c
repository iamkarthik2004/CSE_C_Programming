//LAB 7
//18-04-2024
//EXPERIMENT - 14
//3) Find the factorial of a given Natural Number n using recursive and non-recursive funtions.

#include <stdio.h>
int factorial (int n);
int main()
{
    int fact, num;
    printf("Enter the number: ");
    scanf("%d", &num);
    fact=factorial(num);
    printf("factorial of %d is %d", num, fact);
    return 0;
}

int factorial(int num)
{
    int i, fact = 1;
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}
