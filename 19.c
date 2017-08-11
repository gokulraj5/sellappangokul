#include <stdio.h>
int main()
{
    int num, j;
    unsigned long long factorial = 1;
    printf("Enter an integer: ");
    scanf("%d",&num);
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else
    {
        for(j=1; j<=n; ++)
        {
            factorial *= j;              // factorial = factorial*j;
        }
        printf("Factorial of %d = %llu", num, factorial);
    }
    return 0;
}
