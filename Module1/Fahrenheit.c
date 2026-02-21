/*
Conversion of Fahrenheit to Celsius
	Reza-jhr
	Feburary 21 2026
*/

#include <stdio.h>

int main(void)
{
	int fahrenheit, celsius;
	printf("Pleas enter fahrenheit as an integer: ");
	scanf("%d", &fahrenheit);
	celsius = (fahrenheit - 32)/1.8; //Conversion
	printf("\n%d Fahrenheit is %d Celsius.\n", fahrenheit, celsius);
	return 0;
}