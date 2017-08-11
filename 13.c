#include <stdio.h>
int main()
{
    int num, j, fl = 0;
    printf("Enter a positive integer: ");
    scanf("%d",&num);
    for(j=2; j<=n/2; ++j)
    {
        if(num%j==0)
        {
            fl=1;
            break;
        }
    }
    if (fl==0)
        printf("%d is a prime number.",num);
    else
        printf("%d is not a prime number.",num);
    return 0;
}
