/* Grant Wilkins
   Lab 2 - Fixing Errors
   CPSC 111 Section 001, Fall 2019
   Fixing a program with several errors and making sure it compiles and 
   gives desired results
*/



#include <stdio.h>

int main (void) {

	// variables for showing precedence and integer truncation
	int x = 7, y = 4, z = -12, result = 0; //use semicolon instead of colon and instantiate result to zero for use.
	// variables needed for conversions
	float meters, feet, yards, miles; //Use comma to separate yards and miles	
	const float feetMultiplier = 3.28084, yardsMultiplier = 1.09361, milesMultiplier = .000621371;

	// Show precedence and integer truncation
	result = y + z / x;

	printf("\nresult of  y + z / x  is %d, NOT %.3f  \n", result, (float)(y + z) / x); //Use .3f to round to three floating points, and use " to end string


	// Get user input 
	printf("\n\n** Distance Conversions **\n\n"); //Use ending parentheses
	printf("Enter distance in meters: ");  			
	scanf("%f", &meters); //insert ending quotes to complete string    			

	/*** conversions ***/
	// meters to feet:
	feet = meters * feetMultiplier;

	// meters to yards:
	yards = meters * yardsMultiplier;

	// meters to miles:
	miles = meters * milesMultiplier;


	// Print results
	printf("\n%.4f", meters); //Insert the comma to make meters an argument
	printf(" meters is ");
	printf("%f", feet); //Insert % to turn f into a placeholder properly
	printf(" feet \n");

	printf("%.4f meters is %f yards\n", meters, yards); //Use opening comments to open the string

	printf("%.4f meters is %f miles\n\n", meters, miles); //Insert extra comma to separate arguments for the meters and miles.

	return 0;
}



