#include<stdio.h>
void reverse(char *str);
void main()
{
char a[25];
clrscr();
printf("Enter the string to be reversed: ");
gets(a);
reverse(a);
}
void reverse(char *str)
{
if(*str!='\0')
{
reverse(str+1);
printf("%c", *str);
}
}