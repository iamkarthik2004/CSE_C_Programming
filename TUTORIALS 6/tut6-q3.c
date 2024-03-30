//MODULE 2, TUTORIALS - 6
//Switch statement
//3. Write a C program to convert temperatures between Celsius and Fahrenheit. Ask the user to choose the conversion type (Celsius to Fahrenheit or Fahrenheit to Celsius) and input the temperature. Use a switch case to perform the conversion and display the result.
//MODULE 2, TUTORIALS - 6
//Switch statement
//3. Write a C program to convert temperatures between Celsius and Fahrenheit. Ask the user to choose the conversion type (Celsius to Fahrenheit or Fahrenheit to Celsius) and input the temperature. Use a switch case to perform the conversion and display the result.
#include<stdio.h>
int main()
{
    int a;
    float temperature, Converted_Temp;
    
    printf("Select Type of Conversion:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    scanf("%d", &a);
    
    switch(a)
    {
        case 1:
        printf("Enter the temperature in Celsius: ");
        scanf("%f", &temperature);
        Converted_Temp=(9/5)*temperature+32;
        printf("%f",Converted_Temp);
        break;
        
        case 2:
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        Converted_Temp=((temperature-32)*5)/9;
        printf("%f",Converted_Temp);
        break;
        
        default:
        printf("In valid choice!\n");
        break;
        
    }
}
