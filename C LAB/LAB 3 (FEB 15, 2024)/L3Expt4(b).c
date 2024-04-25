//LAB 3
//15-02-2024
//EXPERIMENT - 3
//FAMILIARIZATION OF CONSOLE I/O AND OPERATORS IN C
//(b) Read two numbers, add them and display their sum

#include <stdio.h>
int main()
{
    int sum,a,b;
    printf("Enter Two numbers to find the sum:\n");
    scanf("%d %d", &a, &b);
    sum = a+b;
    printf("Sum of Two numbers is %d",sum);
    return 0;
}
