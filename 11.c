#include<stdio.h>
#include<string.h>
void main()
{
int i, j, len, flag=0, rev=0, x, r, n;
char str[20];
clrscr();
printf("\nEnter the string: ");
gets(str);
printf("\nEnter the number: ");
scanf("%d", &x);
n=x;
len=strlen(str);
for(i=0,j=(len-1);i<=(len/2);i++,j--)
{
if(str[i]!=str[j])
{
flag=1;
break;
}
}
if(flag==0)
{
printf("\nThe string is a palindrome.");
}
else
{
printf("\nThe string is not a palindrome.");
}
while(x>0)
{
r=x%10;
x=x/10;
rev=(rev*10)+r;
}
if(rev==n)
{
printf("\nThe number is a palindrome");
}
else
{
printf("\nThe number is not a palindrome");
}
}