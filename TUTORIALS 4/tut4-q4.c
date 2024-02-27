//TUTORIALS - 4, MODULE - 2
//QN 4
//4 .Write a program to Find all the roots of a quadratic equation in C.check for all three conditions.

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, r1, r2, img, d;
    printf("Enter the coefficients of the quadratic equation a, b, c:\n");
    scanf("%f %f %f", &a, &b, &c);
    
    d = b * b - 4 * a * c;
    
    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are %0.2f and %0.2f\n", r1, r2);
    }
    else if (d == 0) {
        r1 = -b / (2 * a);
        printf("Only one root: %0.2f\n", r1);
    }
    else {
        r1 = -b / (2 * a);
        img = sqrt(-d) / (2 * a);
        printf("Complex Roots are %0.2f + %0.2fi and %0.2f - %0.2fi\n", r1, img, r1, img);
    }
    
    return 0;
}

