//3. program to check whether the given number is even or odd
#include <stdio.h>

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Checking whether the number is even or odd
    if (num % 2 == 0)
        printf("%d is even.\n", num);
    else
        printf("%d is odd.\n", num);
    
    return 0;
}

