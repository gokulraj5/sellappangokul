#include<iostream.h>
#include<conio.h>
void main()
{
int n,b=0;
clrscr();
cout<<"Enter any num : ";
cin>>n;
while(n>0)
{
n=n/10;
b++;
}
cout<<"\n no. of digits in given number is: "<<b;
getch();
}
