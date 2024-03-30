//MODULE - 2, TUTORIALS - 7
//1. Sum of Natural Numbers:
//Calculate the sum of the first N natural numbers using a while loop.
int main()
{
    int i = 1;
    int n;
    int sum = 0;
    printf("Enter the value of N to find the sum of First N Natural Numbers:");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("The sum of first %d Natural numbers is %d",n,sum);
    return 0;
}
