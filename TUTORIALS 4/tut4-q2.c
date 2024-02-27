//TUTORIALS - 4, MODULE - 2
//QN 2
//C Program To Find Simple Interest
//Simple Interest = {(P x T x R)}{/100}
//Where P is the principal amount, T is the time, and, R is the interest rate.

#include <stdio.h>
#include <math.h>
int main()
{
    float principal, rate, time, simple_interest;
    
    printf("Enter principal:");
    scanf("%f", &principal);
    
    printf("Enter rate:");
    scanf("%f", &rate);
    
    printf("time:");
    scanf("%f", &time);
    
    simple_interest = (principal * time * rate) / 100;
    
    printf("Simple Interest = %f", simple_interest);
    return 0;
}
