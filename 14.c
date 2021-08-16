#include<stdio.h>
void swap(int *x, int *y);
void main()
{
int x, y;
clrscr();
printf("\nEnter two numbers: ");
scanf("%d%d", &x, &y);
printf("\nNumbers before swapping:");
printf("\n x=%d, y=%d", x, y);
swap(&x, &y);
printf("\nNumbers after swapping:");
printf("\n x=%d, y=%d", x, y);
}
void swap(int *x, int *y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;
}
