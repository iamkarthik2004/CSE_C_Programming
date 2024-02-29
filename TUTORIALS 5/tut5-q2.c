/*MODULE 2, TUTORIALS 5
2. If the ages of Ram, Shyam, and Ajay are input through the keyboard, write a
program to determine the youngest of the three. (Use if-else if...else)*/

#include <stdio.h>
int main() 
{
    int Ram_Age, Shyam_Age, Ajay_Age;
    printf("Enter Ages of Ram, Shyam, and Ajay:\n");
    scanf("%d %d %d", &Ram_Age, &Shyam_Age, &Ajay_Age);

    if (Ram_Age <= Shyam_Age && Ram_Age <= Ajay_Age) 
    {
        printf("Ram is the youngest\n");
    } 
    else if (Shyam_Age <= Ram_Age && Shyam_Age <= Ajay_Age) 
    {
        printf("Shyam is the youngest\n");
    } 
    else 
    {
        printf("Ajay is the youngest\n");
    }

    return 0;
}
