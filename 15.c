#include <stdio.h>
int main()
{
    int lo, hi, j, fl;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &lo, &hi);
    printf("Prime numbers between %d and %d are: ", lo, hi);
    while (lo < hi)
    {
        fl = 0;
        for(j = 2; j <= low/2; ++j)
        {
            if(low % j == 0)
            {
                fl = 1;
                break;
            }
        }
        if (fl == 0)
            printf("%d ", lo);
        ++lo;
    }
    return 0;
}
