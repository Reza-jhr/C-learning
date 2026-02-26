/*
Calculate the sine by using an input in this range: 0<input<1
	Reza-jhr
	February 26 2026
*/

#include <stdio.h>
#include <math.h>

double getValidInput(void) //We use a function to see the user's input is valid or no, then we will use it in our calculation
{
	double value;
	printf("Enter a value between 0 and 1 to calculate its sine: ");
	scanf("%lf", &value); //Here we are going to receive a value by the user and send this amount to the adress of the variable
	while (value <= 0.0 || value >= 1.0) //We are using a while loop to stay in our program and if user enter a number with a wrong range, the program automatically ask to enter a new value.
	{
		printf("Error: Value must only be in this range 0<input<1.\nTry again: ");
		scanf("%lf", &value);
	}
	return value;
}

double computeSine(double x) //A function for computing sine
{
	return sin(x);
}

int main(void) //Compute sine
{
	double inputValue = getValidInput();
	double result = computeSine(inputValue); //Here we use computeSine function to calculate the sine of our input
	printf("Sin(%lf) = %lf", inputValue, result);
	return 0;
}