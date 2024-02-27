//TUTORIALS - 4, MODULE - 2
//QN 3
//3. Write a C program to calculate Compound Interest.use pow function.

/*A = P(1 + r/n)^nt
A	=	represents the final amount
P	=	original principal amount
r	=	is the interest rate over a given period
n	=	represents the number of times the interest rate is applied over time
t = Time in Years*/

#include <stdio.h>
#include <math.h>

int main()
{
    float principal, rate, time, compound_interest;
    
    printf("Enter the principal:");
    scanf("%f", &principal);
    
    printf("Enter the rate:");
    scanf("%f", &rate);
    
    printf("Enter the time:");
    scanf("%f", &time);
    
    //A = P(1 + r/100)^n
    compound_interest = principal * (pow((1 + rate / 100), time) - 1);
    
    printf("compound_interest = %0.2f\n", compound_interest);
    
    return 0;
}
