//LAB 3
//15-02-2024
//EXPERIMENT - 3
//FAMILIARIZATION OF CONSOLE I/O AND OPERATORS IN C
//(c) Read the radius of a circle, calculate its area and display it.

#include <stdio.h>
#define Pi 3.14
int main() {
    int Radius;
    float Area;
    printf("Enter Radius:");
    scanf("%d", &Radius);
    Area = Pi*Radius*Radius;
    printf("Area of the circle: %f", Area);
    return 0;
}
