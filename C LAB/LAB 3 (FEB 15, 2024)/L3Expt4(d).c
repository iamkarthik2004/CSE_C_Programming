//LAB 3
//15-02-2024
//EXPERIMENT - 5
//FAMILIARIZATION OF CONSOLE I/O AND OPERATORS IN C

#include <stdio.h>
int main()
{
    int a,b,c,d,e,f,g;
    float result;
    printf("Enter the value:\n");
    scanf("%d %d %d %d %d %d %d", &a,&b,&c,&d,&e,&f,&g);
    result=((a-b/c*d+e)*(f+g));
    printf("result = %f", result);
return 0;    
}
