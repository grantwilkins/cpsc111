/*
Grant Wilkins
9/9/19
CPSC111 Section 1 Lab 3a
Creating a program that will return the Interior Angle, 
the side length, and the perimeter given only the radius
and number of sides.
*/
#define INCH_PER_FEET 12.0
#include<stdio.h>
#include<math.h>
int main(void)
{
	int num_sides = 5;
	int radius = 5;
	//Declare the variables for all that will be printed
	//Calculations for each will be shwown.
	float side_length, perimeter_inch, perimeter_feet, angle_deg, angle_rad; 
	
	//Calculate Angle
	angle_rad = (2*M_PI)/(num_sides);
	//Use conversion of 180/pi to get from radians
	//to degrees
	angle_deg = angle_rad * (180/M_PI);
	
	//Calculate side length
	//The side length will be calculated using law of cosines
	//c^2 = a^2 + b^2 - 2abcos(C), where c is the side_length
	side_length = sqrt(2*pow(radius,2) - 2*radius*radius*cos(angle_rad));
	//Using the two times the power because of the isoceles value.
	
	//Calculate perimeter
	perimeter_inch = num_sides*side_length;
	perimeter_feet = perimeter_inch/INCH_PER_FEET;
	//Print values
	printf("Number of sides: %d \n", num_sides);
	printf("Radius (in): %d\n\n", radius);
	printf("Angle is %.2lf radians (%.1lf degrees) \n", angle_rad, angle_deg);
	printf("Side is %.2lf inches \n", side_length);
	printf("Perimeter is %.2lf inches or %.2lf feet.\n", perimeter_inch, perimeter_feet);

	return 0;
	
}	
