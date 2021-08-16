#include<stdio.h>
struct complex
{
double real;
double imagin;
};
void main()
{
struct complex r1, r2, r3, r4;
clrscr();
printf("\nEnter a and b of the first complex ");
printf("number(a+ib): ");
scanf("%lf%lf", &r1.real, &r1.imagin);
printf("\nEnter a and b of the second complex ");
pritf("number(a+ib): ");
scanf("%lf%lf", &r2.real, &r2.imagin);
r3.real=r1.real+r2.real;
r3.imagin=r1.imagin+r2.imagin;
r4.real=r1.real-r2.real;
r4.imagin=r1.imagin-r2.imagin;
printf("\nComplex Addition: %lf", r3.real);
if(r3.imagin>0)
{
printf("+%lfi", r3.imagin);
}
else
{
printf("%lfi", r3.imagin);
}
printf("\nComplex Subtraction: %lf", r4.real);
if(r4.imagin>0)
{
printf("+%lfi", r4.imagin);
}
else
{
printf("%lfi", r4.imagin);
}
}
