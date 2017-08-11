#include <stdio.h>
int main()
{
    int n, rI = 0, remain, oI;
    printf("Enter an integer: ");
    scanf("%d", &n);
    oI = n; 
    while( n!=0 )
    {
        remain = n%10;
        rI = rI*10 + remain;
        n /= 10;
    }
    if (oI == rI)
        printf("%d is a palindrome.", oI);
    else
        printf("%d is not a palindrome.", oI);
    return 0;
}
