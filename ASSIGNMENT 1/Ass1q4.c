//C Programming - ASSIGNMENT 1
//4] Write a C program to accept the basic salary of an employee from the user. 
//Calculate the gross salary on the following basis:
#include <stdio.h>
int main()
{
    float BS, GS, HRA, DA;
    
    printf("Enter the Basic Salary (BS): ");
    scanf("%f", &BS);
    
    if (BS <= 4000) {
        HRA = BS * 0.1;
        DA = BS * 0.5;
    }
    else if (BS <= 8000) {
        HRA = BS * 0.2;
        DA = BS * 0.6;
    }
    else if (BS <= 12000) {
        HRA = BS * 0.25;
        DA = BS * 0.7;
    }
    else {
        HRA = BS * 0.3;
        DA = BS * 0.8;
    }
    
    GS = BS + HRA + DA;
    
    printf("Gross Salary: %0.2f\n", GS);
    
    return 0;
}

