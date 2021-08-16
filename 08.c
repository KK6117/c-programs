#include<stdio.h>
#include<math.h>
void main()
{
int i, n, x, sum, r;
clrscr();
printf("Enter a range: ");
scanf("%d", &n);
for(i=1;i<=n;i++)
{
sum=0;
x=i;
while(x>0)
{
r=x%10;
sum=sum+pow(r,3);
x=x/10;
}
if(i==sum)
printf("\n%d", i);
}
}