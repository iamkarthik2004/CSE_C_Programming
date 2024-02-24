//TUTORIALS - 2, MODULE - 2
//QN 3
//3. take two input values and perform all arithmetic operations on the given input.
#include <stdio.h>
int main()
{
    int num1,num2;
    printf("Enter two numbers:");
    scanf("%d %d", &num1, &num2);
    
    printf("\nAddition of %d and %d = %d", num1,num2,num1+num2);
    printf("\nSubtraction of %d and %d = %d", num1,num2,num1-num2);
    printf("\nMultiplication of %d and %d = %d", num1,num2,num1*num);
    printf("\nQuotient of %d and %d = %d", num1,num2,num1/num2);
    printf("\nRemainder of %d and %d = %d", num1,num2,num1%num2);
    
    return 0;
}

