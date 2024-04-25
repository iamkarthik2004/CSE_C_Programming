//LAB 4
//29-02-2024
//EXPERIMENT - 5
//PROGRAM TO FIND THE LARGEST OF THREE NUMBERS

#include <stdio.h>
int main()
{
    int num1, num2, num3;
    
    printf("Enter Three Numbers:\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    if((num1>num2)&&(num1>num3))
    {
        printf("Num1 is largest");
    }
    else if((num2>num3)&&(num2>num3))
    {
        printf("Num 3 is largest");
    }
return 0;
}
