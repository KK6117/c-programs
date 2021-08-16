#include<stdio.h>
int main(void)
{
FILE *f1, *f2;
int n, i, l;

f1=fopen("ODD.txt", "w");
f2=fopen("EVEN.txt", "w");
printf("ENTER THE LIMIT: ");
scanf("%d", &l);
for(i=1;i<=l;i++)
{
if(i%2==0)
{
putw(i, f2);
}
else
{
putw(i, f1);
}
}
fclose(f1);
fclose(f2);
f1=fopen("ODD.txt", "r");
f2=fopen("EVEN.txt", "r");
printf("\nCONTENTS OF ODD FILE\n");
while((i=getw(f1))!=EOF)
{
printf("%d\t", i);
}
printf("\nCONTENTS OF EVEN FILE\n");
while((i=getw(f2))!=EOF)
{
printf("%d\t", i);
}
fclose(f1);
fclose(f2);
}