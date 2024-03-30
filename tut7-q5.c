//MODULE - 2, TUTORIALS - 7
//5. Table of a Number (n*i= n*I format to print the output)
//Display the multiplication table of a given number using a while loop.
#include <stdio.h>
int main()
{int i=1,n,multiply;
printf("Enter the value of n to display its multiplication table:");
scanf("%d",&n);
while(i<=10)
{
    multiply=i*n;
    printf("%d*%d=%d\n",n,i,multiply);
    i++;
}
return 0;
}
