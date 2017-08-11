#include <stdio.h>
int main()
{
    int b, ex;
     long long res = 1;
    printf("Enter a base number: ");
    scanf("%d", &b);
    printf("Enter an ex: ");
    scanf("%d", &ex);
    while (ex != 0)
    {
        result *= b;
        --ex;
    }
    printf("Answer = %lld", res);
    return 0;
}
