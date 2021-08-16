#include<stdio.h>
struct student
{
int roll;
char name[50];
int mark[5];
float p;
};
void main()
{
int n, i, j;
struct student stu[100];
clrscr();
printf("Enter the number of students: ");
scanf("%d", &n);
for(j=0;j<n;j++)
{
float s=0;
printf("\nRoll No.: ");
scanf("%d", &stu[j].roll);
printf("\nName: ");
scanf("%s", &stu[j].name);
printf("\nEnter the five marks: ");
for(i=0;i<5;i++)
{
scanf("%d", &stu[j].mark[i]);
s=(s+stu[j].mark[i]);
}
stu[j].p=(float)((s/400)*100);
}
printf("\nROLL\tNAME\tPERCENTAGE(%)");
for(j=0;j<n;j++)
{
printf("\n%d\t", stu[j].roll);
printf("%s", stu[j].name);
printf("\t%f", stu[j].p);
}
}
