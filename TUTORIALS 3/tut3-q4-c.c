//1 + a * b % c

#include<stdio.h>
int main()
{
int a,b,c,d;
int result;

printf("Enter values for a,b,c,d:");
scanf("%d %d %d", &a, &b, &c);


result = 1 + a * b % c;
printf("Result:%d\n",result);

return 0;
}
