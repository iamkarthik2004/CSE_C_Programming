//LAB 7
//18-04-2024
//EXPERIMENT - 13
//1) Using Structure, read and print data of n employees (Name, Employee ID, and Salary)

#include <stdio.h>

struct employee {
    char name[50];
    int e_id;
    float salary;
};

int main() {
    int n;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct employee employees[n];

    // Collecting details for each employee
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", &employees[i].name);

        printf("Employee ID: ");
        scanf("%d", &employees[i].e_id);

        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    // Display details for each employee
    printf("\nName\t\t");
    printf("Employee ID\t");
    printf("Salary\n"); 
    

    for (int i = 0; i < n; i++) {
        printf("%s\t\t%d\t\t%.2f\n", employees[i].name, employees[i].e_id, employees[i].salary);
    }

    return 0;
}


