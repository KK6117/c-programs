#include<stdio.h>
#include<string.h>
int main(void)
{
FILE *f;
char c[50];
printf("DATA INPUT\n\n");
f=fopen("34k.txt", "w");
fscanf(stdin, "%[^\n]", c);
fprintf(f, "%s", c);
// while((c=getchar())!=EOF)
// {
// putc(c, f);
// }
fclose(f);
printf("DATA OUTPUT\n\n");
f=fopen("34k.txt", "r");
printf("%s", c);
fclose(f);
}