#include<stdio.h>
#include<string.h>
void main()
{
int i, count=0;
char s[100];
clrscr();
printf("Enter the sentence: ");
gets(s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]==' ')
{
count++;
}
}
printf("The number of words in the sentence is %d", count+1);
}