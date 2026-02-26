/*
Practice and modify an error
	Reza-jhr
	February 26 2026
*/

#include<stdio.h>
#define PI 3.14159
int main(void)
{ 
 double radius; //Using double instead of int
 printf("Enter radius:"); //We need to use double quotation not smart quotation.
 scanf("%lf", &radius);
printf("volume is : %lf \n\n", (4 / 3.0) * PI * radius * radius * radius ); //We need to use %f for showing the result as a double instead of %d. 
return 0;
}