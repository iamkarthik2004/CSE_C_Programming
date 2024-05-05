//Write a menu-driven program to do the following using pointers and user-defined functions
//(i) Add Two numbers
//(ii) Swap Two Numbers

#include<stdio.h>
void addNumbers(int *n1, int *n2);
void swapNumbers(int *n1, int *n2);

void addNumbers(int *n1, int *n2)
{
printf("Sum is %d\n", *n1 + *n2);
}

void swapNumbers(int *n1, int *n2)
{
int temp = *n1;
*n1 = *n2;
*n2 = temp;
printf("Before Swapping: n1 = %d, n2 = %d\n", *n1, *n2);
printf("After Swapping: n1 = %d, n2 = %d\n", *n2, *n1);
}

//function declaration

int main()
{
	int a, b;
	int option;
	char cont;
		do {
		printf("\nChoose an option:\n");
		printf("1. Addition\n");
		printf("2. Swap\n");
		printf("3. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &option);
			
		switch (option) {
		
		case 1:
		//case for AddNumbers
		printf("Enter two numbers: ");
		scanf("%d %d", &a, &b);
		addNumbers(&a, &b);
		break;
		
		case 2:
		//case for swappingNumbers
		printf("Enter the first numebr: ");
		scanf("%d", &a);
		printf("Enter the second number: ");
		scanf("%d", &b);
		swapNumbers(&a, &b);
		break;
		
		case 3:
		// Case for exiting the program
		printf("Exiting the program.\n");
		break;
		
		default:
		
		printf("Invalid option!\n");
	}
	printf("Do you want to continue? (y/n): ");
	scanf(" %c", &cont);
	
	}
	while (cont == 'y' || cont == 'Y');
		
	printf("Exiting...\n");
	return 0;

}
