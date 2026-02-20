/*
Circle and Area
	Reza-jhr
	February 20 2026
*/

#include <stdio.h>

#define PI 3.14159

int main()
{
	double area = 0.0, radius = 0.0;
	printf("Enter radius: ");
	scanf("%lf", &radius);
	area = PI * radius * radius;
	printf("A circle with radius of %lf meters has area of %lf sq. meters\n", radius, area);
	return 0;
}
