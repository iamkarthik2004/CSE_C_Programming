//a + b – c + d


#include<stdio.h>
int main()
{
int a,b,c,d;
int result;

printf("Enter values for a,b,c,d:");
scanf("%d %d %d %d", &a, &b, &c, &d);

result = a + b - c + d;
printf("Result:%d\n",result);

return 0;
}
