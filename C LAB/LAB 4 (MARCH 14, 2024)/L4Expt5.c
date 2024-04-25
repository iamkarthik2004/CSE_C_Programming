//LAB 4
//14-03-2024
//EXPERIMENT - 5
//PROGRAM TO CHECK THE NUMBER IS ARMSTRONG NUMBER OR NOT

#include <stdio.h>
int main()
{
    int num,rem,result=0;
    int org_num;
    printf("Enter a numebr to check Armstrong Number: ");
    scanf("%d", &num);
    org_num=num;
    
    while(num>0)
    {
        rem=num%10;
        result=(result)+(rem*rem*rem);
        num=num/10;
    }
    
    if(org_num==result)
    {
        printf("%d is an Armstrong number", org_num);
    }
    else
    {
        printf("%d is not an Armstrong number", org_num);
    }
    return 0;
}
