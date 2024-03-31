//MODULE - 2, TUTORIALS - 7
//Reverse a Number:
//Reverse the digits of a given number using a while loop.
#include <stdio.h>
int main()
{
    int rev=0,n;
    printf("Enter any number:");
    scanf("%d",&n);
    while(n>0)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
    printf("%d",rev);
    return 0;
}

