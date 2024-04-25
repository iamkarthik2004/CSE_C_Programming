//LAB 5
//04-04-2024
//EXPERIMENT - 7
//PROGRAM TO FIND THE SUM AND AVERAGE OF NUMBERS USING ARRAY

#include <stdio.h>
int main()
{
    int i,n,array[10];
    float average,sum=0;
    
    printf("Enter the Number of Elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for(i=0; i<n; i++)
    {
    scanf("%d", &array[i]);
    sum+=array[i];
    }
    average=sum/n;
    printf("The sum is %f\n",sum);
    printf("The average is %0.2f",average);
    
    return 0;
}
