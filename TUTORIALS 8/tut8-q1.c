//MODULE - 2, TUTORIALS - 8
//1.Floyd’s triangle
//Enter the number of rows for Floyd's Triangle: 4
//Floyd's Triangle with 4 rows:
//1
//2 3
//4 5 6
//7 8 9 10

#include <stdio.h>
int main()
{
    int rows, num=1;
    printf("Enter the no.of rows:");
    scanf("%d", &rows);
    
    for(int i=0;i<rows;i++){
        for(int j=0;j<=i; j++){
            printf("%d",num);
            num++;
    }
    printf("\n");
    }
    return 0;
}

