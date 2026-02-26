/*
Using Sizeof Commands
	Reza-jhr
	February 26 2026
*/

#include <stdio.h>

int main(void)
{
	int a = 2, b = 5, c = 12; //declaration and initialization
	double average = 0;
	char ch = 'R';

	printf("On my system\n");
	printf("int is %lu bytes.\n", sizeof(int));
	printf("long int is %lu bytes.\n", sizeof(long int));
	printf("char is %lu bytes.\n", sizeof(ch));
	printf("float is %lu bytes.\n", sizeof(float));
	printf("double is %lu bytes.\n", sizeof(double));
	printf("long double is %lu bytes.\n", sizeof(long double));
	return 0;
}