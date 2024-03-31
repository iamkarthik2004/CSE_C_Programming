//MODULE - 2, TUTORIALS - 8
//3.Use Nested for loops for checking prime numbers within a certain range.
//Output (For n = 10):
//Enter the range of numbers to check for prime: 10 2 3 5 7

#include <stdio.h>
int main()
{
    int lower, upper;
    
    printf("Enter the Lower and Upper Limit:");
    scanf("%d %d", &lower, &upper);
    
    printf("Prime numbers b/w %d and %d are:", lower, upper);
    
    for(int i=lower; i<=upper; i++){
        int factor=0;
        //check if i is PRIME
        for(int j=1; j<=i; j++){
            if(i%j==0){
                factor++;
            }
        }
        
        if(factor==2){
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;  
}
