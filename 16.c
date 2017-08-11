include <stdio.h>
int main()
{
    int lo, hi, a, fl;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &lo, &hi);
    printf("Prime numbers between %d and %d are: ", low, high);
    while (lo < hi)
    {
        fl = 0;
        for(a = 2; a <= low/2; ++a)
        {
            if(low % a == 0)
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
