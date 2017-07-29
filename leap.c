#inculde<stdio.h>
int main()
{
int i,year;
scan("%d",&year);
i=year%4;
if(i==0)
printf("it is leapyear");
else
printf("it is nonleapyear");
}
