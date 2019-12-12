/*
Grant Wilkins
CPSC 111 Section 1 Lab 4b
9/16/19
This function will provide a running sum of the powers of two using a
for loop
*/

#include<stdio.h>
#include<math.h>
int main(void)
{
	//Initialize variable for number of terms, sum, and the value in the loop
	int num_terms;
	int sum;
	int value_in_loop=1;
	//prompt user
	printf("Enter an integer: ");
	scanf("%d", &num_terms);
	

	printf("%9s%12s\n", "Value", "Sum");
	//Using a for loop to go through every term in the number of terms
	for(int i = 0; i < num_terms; i++)
	{
		//Calculates value based on index
		value_in_loop = pow(2,i);
		//Adds given value to running sum
		sum += value_in_loop;
		printf("%9d%12d\n", value_in_loop, sum); 
	}
	return 0;
}
