#include <stdio.h>
int main()
{
    int y;
    scanf("%d",&y);
    if(year%4 == 0)
    {
        if( year%100 == 0)
        {
            if ( year%400 == 0)
                printf("%d is a leap year.", year);
            else
                printf("%d is not a leap year.", year);
        }
        else
            printf("%d is a leap year.", year );
    }
    else
        printf("%d is not a leap year.", year);
    return 0;
}
