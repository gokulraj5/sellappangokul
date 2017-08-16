#include <stdio.h>
int main()
{
    int num, rn = 0, remain;
    printf("Enter an integer: ");
    scanf("%d", &num);
    while(num != 0)
    {
        remain = num%10;
        rn = rn*10 + remain;
        num /= 10;
    }
    printf("Reversed Number = %d", rn);
    return 0;
}
