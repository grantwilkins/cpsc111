/*
Grant Wilkins
CPSC 111 Section 1 Lab 4a
9/16/19
This function will provide a running sum of the powers of two using a
while loop
*/

#include<stdio.h>
#include<math.h>
int main(void)
{
	//Initialize variable for number of terms, and sum
	int num_terms;
	int sum;
	int value_in_loop=1;
	int temp = 0;
	//prompt user
	printf("Enter an integer: ");
	scanf("%d", &num_terms);
	

	printf("%9s%12s\n", "Value", "Sum");
	//Uses a temporary counter variable to know when to terminate
	while(temp < num_terms)
	{
		//Calculates current value in loop.
		value_in_loop = pow(2,temp);
		//Adds current value to the running sum
		sum += value_in_loop;
		printf("%9d%12d\n", value_in_loop, sum);
		temp++; 
	}
	return 0;
}
