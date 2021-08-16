#include<stdio.h>
void main()
{
int a, b, c, d, e, f, g;
long int x, n;
clrscr();
printf("Enter the amount: ");
scanf("%ld", &n);
x=n;
a=n/2000;
n=n%2000;
b=n/500;
n=n%500;
c=n/200;
n=n%200;
d=n/100;
n=n%100;
e=n/50;
n=n%50;
f=n/20;
n=n%20;
g=n/10;
n=n%10;
printf("\nAmount of %ld can be divided into:\n", x);
printf("\n%d x Rs.2000 Note(s)", a);
printf("\n%d x Rs.500 Note(s)", b);
printf("\n%d x Rs.200 Note(s)", c);
printf("\n%d x Rs.100 Note(s)", d);
printf("\n%d x Rs.50 Note(s)", e);
printf("\n%d x Rs.20 Note(s)", f);
printf("\n%d x Rs.10 Note(s)", g);
printf("\n%d x Re.1 Coin(s)", n);
}