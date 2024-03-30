//MODULE 2, TUTORIALS - 6
//Switch statement
//2. Create a C program that prompts the user to enter a month number (1 to 12) and displays the number of days in that month. Consider a non-leap year.
#include <stdio.h>
int main()
{
    int month;
    
    printf("Enter a Number:");
    scanf("%d", &month);
    
    switch (month)
    {
    //January, March, May, July, August, October, December    
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        printf("Number of days: 31\n");
        break;
    
    //April, June, September, November    
        case 4:
        case 6:
        case 9:
        case 11:
        printf("Number of days: 30\n");
        break;
    
    //February
        case 2:
        printf("Number of days: 28\n");
        break;
    default:
    printf("Invalid Month Number\n");
    }
    
    return 0;
}
