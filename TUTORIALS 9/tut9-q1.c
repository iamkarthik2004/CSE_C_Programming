//TUTORIALS - 9
#include <stdio.h>
int main()
{
    int num, i, array[num];
    printf("Enter the number of elements in the array: ");
    scanf("%d", &num);

    printf("Enter Elements:\n", num);
    for(i = 0; i<num; i++)
    {
        scanf("%d", &array[i]);
    }
    
    int Even_S = 0, Odd_S = 0;
    for(i = 0; i < num; i++)
    {
        if(array[i]%2 == 0)
        {
            Even_S += array[i];
        }
        else
        {
            Odd_S += array[i];
        }
    }
    
    printf("Sum of Even Number is %d\n", Even_S);
    printf("Sum of Odd Number is %d\n", Odd_S);
    
    if(Even_S > Odd_S)
    {
        printf("The Large Sum is %d\n", Even_S);
    }
    else
    {
        printf("The Large Sum is %d\n", Odd_S);
    }
    
    return 0;
}
