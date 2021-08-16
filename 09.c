#include<stdio.h>
#include<math.h>
void main()
{
int i, n, sum=0, k=0, f;
float avg;
clrscr();
printf("Enter the number upto which is needed: ");
scanf("%d", &n);
for(i=2;i<=n;i++)
{
	f=prime(i);
	if(f==0)
	{
		sum=sum+i;
		k++;
	}
}
avg=(float)sum/k;
printf("\nAverage=%f", avg);
}
int prime(int i)
{
int j, primeno=0;
for(j=2;j<=i/2;j++)
{
	if(i%j==0)
	{
		primeno=1;
		break;
	}
}
return(primeno);
}