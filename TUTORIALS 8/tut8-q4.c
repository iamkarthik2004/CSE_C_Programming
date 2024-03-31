//MODULE - 2, TUTORIALS - 8
//4. Print the following diamond pattern
/*  *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    * */

#include <stdio.h>
int main()
{
    int i,j,spaces,rows;
    printf("Enter the number of rows:");
    scanf("%d", &rows);
    
    //Upper Half
    spaces = rows - 1;
    for(i=1; i<=rows; i++) {
        for (j=1; j<=spaces; j++) {
            printf(" ");
        }
    spaces--;
    for(j=1; j<=2*i-1; j++) {
        printf("*");
    }
    printf("\n");
}
    
    //Lower Half
    spaces=1;
    for(i=1; i <= rows - 1; i++) {
        for(j=1; j <= spaces; j++) {
            printf(" ");
        }
        spaces++;
        for(j=1; j<=2*(rows-i)-1; j++) {
            printf("*");
        }
        printf("\n");
        }
    
    return 0;
}


