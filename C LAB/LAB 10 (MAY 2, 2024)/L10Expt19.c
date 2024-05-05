//Q2. Input and Print the elements of an array using pointers
//aptr - arrayPointer
#include <stdio.h>
int main(){
   int a[10],i,n,sum=0,*aptr;
   printf("Enter Limit: ");
   scanf("%d", &n);
   
   aptr=a;
   
   printf("Enter Elements:\n");
   for(i=0;i<n;i++)
   {
   scanf("%d",(aptr+i));
   }
   for(i=0;i<n;i++)
   {
   sum=sum+*(aptr+i);
   }
   printf("Sum is %d", sum);
   return 0;
}



