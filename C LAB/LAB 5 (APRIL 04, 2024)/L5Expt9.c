//LAB 5
//04-04-2024
//EXPERIMENT - 9
//BUBBLE SORT

#include <stdio.h>
int main()
{
    int A[100],i,n,pass,temp;
    printf("Enter the number of elements to be sorted:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(pass=0;pass<n-1;pass++)
    {
        for(i=0;i<n-pass-1;i++)
        {
            if(A[i]>A[i+1])
            {
                temp=A[i];
                A[i]=A[i+1];
                A[i+1]=temp;
            }
        }
    }
    printf("Sorted Array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ", A[i]);
    }
return 0;    
}
