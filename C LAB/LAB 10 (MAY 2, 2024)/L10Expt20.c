//Q3. Compute the sum of the elements stored in an array using pointers and user-defined functions.

#include <stdio.h>
int sumArray(int *arr, int size)
{
   int sum = 0;
   for(int *ptr = arr; ptr < arr + size; ptr++)
   {
   sum += *ptr;
   }
   return sum;
}

int main()
{
   int size;
   printf("Enter the number of elements of the array:\n");
   scanf("%d", &size);
   
   int arr[size];
   printf("Enter elements of the array:\n");
   for(int i = 0; i < size; i++)
   {
    scanf("%d", &arr[i]);
   }
   int arraySum = sumArray(arr, size);
   printf("Sum of the array elements: %d\n", arraySum);
   return 0;
}   



