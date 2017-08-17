
#include <stdio.h>
int main()
{
    int num1, num2, mm;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    mm = (num1>num2) ? num1 : um;
    while(1)
    {
        if( mm%num1==0 && mm%num2==0 )
        {
            printf("The LCM of %d and %d is %d.", num1, num2,mm);
            break;
        }
        ++mm;
    }
    return 0;
}
