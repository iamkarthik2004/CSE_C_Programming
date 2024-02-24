//TUTORIALS - 2, MODULE - 2
//QN 2
//2. input 3 numbers (real or integer)and find the average of the three numbers with precision of format as 8.3
#include <stdio.h>
int main()
{
    float a,b,c,Average;
    printf("Enter 3 numbers to find the Average:\n");
    scanf("%f%f%f", &a, &b, &c);
    Average = (a+b+c)/3;
    printf("Average = %0.3f", Average);
    return 0;
}
