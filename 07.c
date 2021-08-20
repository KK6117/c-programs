#include<stdio.h>
void main()
{
int i, n, j, k;
clrscr();
printf("Enter the size of all the pyramid: ");
scanf("%d", &n);
for(i=1;i<=n;i++)
{
for(j=i;j<n;j++)
{
printf(" ");
}
for(k=1;k<(i*2);k++)
{
printf("*");
}
printf("\n");
}
}

