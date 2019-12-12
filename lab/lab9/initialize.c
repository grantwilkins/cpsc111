//Grant Wilkins
//Lab 9 CPSC 111 Section 001
//This is the initialize.c file, which initializes the given ARRAys
//for use in the other files.
#include "defs.h"


//Instantiates the array values with user input
//INPUT: Array we wish to assign values to
//OUTPUT: Void, yet it changes the values of the array in memory.
void initWithInput(int arr1[])
{
		for(int i = 0; i < ARRAY_SIZE; i++)
		{
				//Instantiates new values on every
				//line with input
				scanf("%d", &arr1[i]);
		}
}

//Instantiates the array values with random function from stdlib
//INPUT: Array we wish to assign values to
//OUTPUT: Void, yet it changes the values of the array in memory.
void initWithRandom(int arr1[])
{
		for(int i = 0; i < ARRAY_SIZE; i++)
		{
				//Finds rand values between 1 and 50
				arr1[i] = 1+(rand() % 50);
		}
}
