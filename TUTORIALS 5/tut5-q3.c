/*MODULE 2, TUTORIALS 5
3. Program checks whether a number given by the user is zero, positive, or negative*/
#include <stdio.h>
int main() 
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);

    if (num>0) 
    {
        printf("The Number is Positive\n");
    } 
    else if (num<0) 
    {
        printf("The Number is Negative\n");
    } 
    else 
    {
        printf("The Number is Zero\n");
    }

    return 0;
}
