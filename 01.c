#include<stdio.h>
void main()
{
	int n, sum=0, rev=0, r;
	clrscr();
	printf("\nEnter the number: ");
	scanf("%d", &n);
	while(n>0)
	{
	r=n%10;
	sum=sum+r;
	n=n/10;
	rev=(rev*10)+r;
	}
	printf("\nThe sum of the digits:%d", sum);
	printf("\nThe reverse of the number:%d", rev);
}