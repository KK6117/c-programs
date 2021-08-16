#include<stdio.h>
#include<math.h>
void main()
{
	int x1, x2, y1, y2;
	float d;
	clrscr();
	printf("\n Enter the values of the first coordinate: ");
	printf("Hey")
	scanf("%d%d", &x1, &y1);
	printf("\nEnter the values of the second coordinate: ");
	scanf("%d%d", &x2, &y2);
	d=sqrt(pow((x2-x1), 2)+pow((y2-y1), 2));
	printf("\n\nDistance between the two coordinates: %f", d);
}