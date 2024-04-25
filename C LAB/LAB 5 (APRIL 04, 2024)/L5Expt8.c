//LAB 5
//04-04-2024
//EXPERIMENT - 8
//PROGRAM TO FIND THE SUM AND AVERAGE OF NUMBERS USING ARRAY

#include <stdio.h>
int main()
{
    int n,key,found=0;
    
    printf("Enter the Number of Elements in the Array: ");
    scanf("%d", &n);
    
    int Array[n];
    printf("Enter the Integers:\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &Array[i]);
    }
    
    printf("Enter the number to be found:");
    scanf("%d", &key);
    for(int i=0; i<n; i++)
    {
        if(Array[i]==key)
        {
            printf("The element is found in array\n");
            found=1;
            break;
        }
    }
    if(found==0)
    {
        printf("The element is not found in array\n");
    }
    return 0;
}
