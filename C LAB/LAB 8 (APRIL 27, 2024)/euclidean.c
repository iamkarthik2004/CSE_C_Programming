//Structure - Euclidean Space
//LAB 8
//06-05-2024
//Read two inputs each representing the distances between two points in Euclidean space, store these in structure variables and add the two distance value.

#include <stdio.h>
#include <math.h>

struct points
{
    int x;
    int y;
}p1,p2;

int main()
{
    //Coordinates of First Point
    printf("Enter the Coordinate of Point1: ");
    scanf("%d %d", &p1.x, &p1.y);
    
    //Coordinated of Second Point
    printf("Enter the Coordinate of Point2: ");
    scanf("%d %d", &p2.x, &p2.y);
    
    //Difference of X and y Coordinates
    //(x2 - x1), (y2-y1)
    int XP=p2.x-p1.x;
    int YP=p2.y-p1.y;
    
    //Calculating Distance
    float res=sqrt((XP*XP)+(YP*YP));
    
    printf("The Euclidean Distance is: %.3f units",res);
    return 0;
}
