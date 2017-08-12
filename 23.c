#include <stdio.h>
int hcf(int, int);
int main()
{
    int c, d, r;
    printf("Enter the two numbers to find their HCF: ");
    scanf("%d%d", &c, &d);
    result = hcf(c, d);
    printf("The HCF of %d and %d is %d.\n", c, d, r);
    return 0;
}
int hcf(int c, int d)
{
    while (c != d)
    {
        if (c > d)
        {
            c = c - d;
        }
        else
        {
            c = d - c;
        }
    }
    return c;
}
