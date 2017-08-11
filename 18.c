#include <stdio.h>
int main()
{
    int num, oN, remain, result = 0;
    printf("Enter a three digit integer: ");
    scanf("%d", &num);
    oN = number;
    while (oN != 0)
    {
        remain= oN%10;
        result += remain*remain*remain;
        oN /= 10;
    }
    if(result == num)
        printf("%d is an Armstrong number.",num);
    else
        printf("%d is not an Armstrong number.",num);
    return 0;
}
