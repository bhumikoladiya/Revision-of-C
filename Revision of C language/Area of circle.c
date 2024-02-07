#include<stdio.h>
main()
{
	float r,area,pie;
	pie=3.14;
	printf("Enter a value of r:");
	scanf("%f", &r);
	area=pie*r*r;
	printf("Area of circle is %f",area);
}
