#include<stdio.h>
void main()
{
int n, r;
clrscr();
printf("\nEnter N to find the N-th term of the Fibonacci");
printf(" Series: ");
scanf("%d", &n);
if(n<0)
{
printf("\nFibonacci of a negative number does not exist!");
}
else
{
r=fibo(n);
printf("\nThe %d th term of the Fibonacci ");
printf("Series: %d", n, r);
}
}
int fibo(int n)
{
if(n==0)
{
return 0;
}
else if(n==1)
{
return 1;
}
else
{
return (fibo(n-1)+fibo(n-2));
}
}