#include<stdio.h>
void main()
{
int i, j, a[10][10], m;
clrscr();
printf("\nEnter the order of the matrix: ");
scanf("%d", &m);
for(i=0;i<m;i++)
{
	for(j=0;j<m;j++)
	{
	if(i==j)
	{
	a[i][j]=0;
	}
	else if(i<j)
	{
	a[i][j]=1;
	}
	else
	{
	a[i][j]=-1;
	}
	}
}
for(i=0;i<m;i++)
{
printf("\n");
for(j=0;j<m;j++)
{
printf("%d\t", a[i][j]);
}
}
}