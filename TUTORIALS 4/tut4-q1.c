//TUTORIALS - 4, MODULE - 2
//QN 1
//1. C Program to Add Two Complex Numbers
//Enter the value of real and imaginery parts using a space
//Eg:2 3 (like this)
#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c,d;
    
    printf("Enter the real and imaginery parts of the first complex number (a+ib):");
    scanf("%d %d", &a, &b);
    printf("Enter the real and imaginery parts of the second complex number (c+id):");
    scanf("%d %d", &c, &d);
    
    //Addition of complex numebrs
    int s = a + c;
    int t = b + d;
    printf("Sum of the complex numbers: %d + %di\n", s, t);
    
    return 0;
}
