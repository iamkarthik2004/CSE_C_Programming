//C Programming - ASSIGNMENT 1
//3] Write a C program to display and find the sum of the series
//2+22+222+....222 upto n. For eg: if n=4, the series is:
//2+22+222+2222.
//Take the value of 'n' as input from the user.

#include <stdio.h>

int main() {
    int i, n, sum1 = 0, sum2 = 0, var = 2;
    
    printf("Enter the value of n:");
    scanf("%d", &n);
    
    for (i = 1; i <= n; ++i) {
        sum1 = sum1 * 10 + var;
        
        printf("%d", sum1);
        
        sum2 = sum2 + sum1;
        
        if (i < n) {
            printf(" + ");
        }
    }
    
    printf(" = %d\n", sum2);
    
    return 0;
}
