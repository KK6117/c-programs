#include<stdio.h>
void main()
{
int a1[20], a2[20], a3[20], i, m, n, j=0, k=0;
clrscr();
printf("\nEnter the size of the first array: ");
scanf("%d", &m);
printf("\nEnter the elements of the sorted array: ");
for(i=0;i<m;i++)
{
scanf("%d", &a1[i]);
}
printf("\nEnter the size of the second array: ");
scanf("%d", &n);
printf("\nEnter the elements of the sorted array: ");
for(i=0;i<n;i++)
{
scanf("%d", &a2[i]);
}
i=0;
while(i<m&&j<n)
{
if(a1[i]<a2[j])
{
a3[k]=a1[i];
i++;
}
else
{
a3[k]=a2[j];
j++;
}
k++;
}
if(i>=m)
{
while(j<n)
{
a3[k]=a2[j];
j++;
k++;
}
}
if(j>=n)
{
while(i<m)
{
a3[k]=a1[i];
i++;
k++;
}
}
printf("\nAfter Merging: ");
for(i=0;i<(m+n);i++)
{
printf("\n%d", a3[i]);
}
}
