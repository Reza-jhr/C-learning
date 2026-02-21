/*
The distance of marathon in kilometers
	Reza-jhr
	February 21 2026
*/

#include <stdio.h>

int main(void)
{
	int miles = 26, yards = 385;
	double kilometers;
	kilometers = 1.609 * (miles + yards / 1760.0);
	printf("\nA marathon is %lf kilometers.\n\n", kilometers);
	return 0;
}