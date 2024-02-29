/*MODULE 2, TUTORIALS 5
4. Write a C program to read roll no, name, and marks of three subjects and calculate
the total, percentage.
a. If the percentage of the marks >=75 then print First Class with Distinction
b. If the percentage of the marks >=60 and <75 print First Class
c. If the percentage of the marks <60 print Second Class*/

#include <stdio.h>

int main() {
    int Roll_Num;
    char Name[50];
    float Marks1, Marks2, Marks3, Total_Marks, Percentage;

    printf("Enter Roll Num, Name, Marks of Three Subjects:\n");
    scanf("%d %s %f %f %f", &Roll_Num, &Name, &Marks1, &Marks2, &Marks3);
    
    Total_Marks = Marks1 + Marks2 + Marks3;
    Percentage = (Total_Marks / 300) * 100;
    
    printf("Total Marks: %f\n", Total_Marks);
    printf("Percentage: %f\n", Percentage);

    if (Percentage >= 75) 
    {
        printf("First Class with Distinction\n");
    } 
    else if (Percentage >= 60 && Percentage < 75) 
    {
        printf("First Class\n");
    } 
    else 
    {
        printf("Second Class\n");
    }

    return 0;
}
