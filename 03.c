#include<stdio.h>
void main()
{
int x;
long double fact=1;
clrscr();
printf("\nEnter the number: ");
scanf("%d", &x);
while(x>0)
{
fact=fact*x;
x--;
}
printf("Factorial is %Lf", fact);
}