//LAB 4
//14-03-2024
//EXPERIMENT - 6
//PROGRAM TO CHECK THE NUMBER IS PRIME OR NOT, USING FOR LOOP

#include <stdio.h>
int main()
{
    int num,i,temp=1;
    printf("Enter a number:");
    scanf("%d",&num);
    
    if(num==1)
    {
        printf("%d is either composite or prime\n",num);
    }
    else
    {
        for(i=2;1<num/2;i++)
        {
            if(num%i==0)
            {
                temp=0;
                break;
            }
        }
        if(temp==0)
        {
            printf("\n%d is not prime number\n",num);
        }
        else
        {
            printf("\n%d is a prime number\n", num);
        }
    }
    return 0;
}
