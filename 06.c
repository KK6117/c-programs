#include<stdio.h>
void main()
{
int y;
clrscr();
printf("\nEnter the year: ");
scanf("%d", &y);
if((y%4==0&&y%100!=0)||(y%400==0))
{
printf("\n%d is a leap year", y);
}
else
{
printf("\n%d is not a leap year", y);
}
}