//MODULE - 2, TUTORIALS - 8
//2.Create this pattern
//*****
//****
//***
//**
//*
#include <stdio.h>
int main() {
    int rows;
    
    printf("Enter the no.of rows:");
    scanf("%d", &rows);
    
    for(int i=0; i<rows; i++) {
        for(int j=0; j<rows-i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

