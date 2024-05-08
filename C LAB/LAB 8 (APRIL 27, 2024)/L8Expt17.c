//UNION
//LAB 8
//28-04-2024
//PROGRAM 17
/*QN (2) Using Structure, read and print data of n employees (Name, Employee ID, and Salary) 
Decalre a union containing 5 string variables (Name, House Name, City Name, State, and Pin Code) each with a length of C_SIZE (user-defined constant). 
Then, read and display the address of a person using a varibale of the union.*/

#include <stdio.h>
#define C_SIZE 100

//Define Union
union Address
{
    char name[C_SIZE];
    char house_name[C_SIZE];
    char city_name[C_SIZE];
    char state[C_SIZE];
    char pin_code[C_SIZE];
};

int main()
{
    //Declare variable of union
    union Address address;
    
    printf("Enter Name: ");
    fgets(address.name, C_SIZE, stdin);
    
    printf("Enter House Name: ");
    fgets(address.house_name, C_SIZE, stdin);
    
    printf("Enter City Name: ");
    fgets(address.city_name, C_SIZE, stdin);
    
    printf("Enter State: ");
    fgets(address.state, C_SIZE, stdin);
    
    printf("Enter Pin Code: ");
    fgets(address.pin_code, C_SIZE, stdin);
    
    //Address Displaying
    printf("\nDisplaying Address:\n");
    printf("Name: %s", address.name);
    printf("House Name: %s", address.house_name);
    printf("City Name: %s", address.city_name);
    printf("State: %s", address.state);
    printf("Pin Code: %s", address.pin_code);
    
    return 0;
}



