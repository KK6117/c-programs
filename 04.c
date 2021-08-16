#include<stdio.h>
void main()
{
int n, i, j;
clrscr();
printf("\nEnter the number of tables: ");
scanf("%d", &n);
printf("\n\n");
for(i=1;i<=10;i++)
{
for(j=1;j<=n;j++)
{
printf("%d*%d=%d", i, j, i*j);
printf("\t\t");
}
printf("\n");
}
}