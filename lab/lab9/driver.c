//Grant Wilkins
//Lab 9 CPSC 111 Section 001
//This is the driver.c file which includes the main method and runs
//the program using the functions defined in other files.
//The point of this project is to return the secondHighest, initialize,
//and find the innerProduct of two arrays.
#include"defs.h"

void printArray(int arr1[]);
int main(void)
{
		//Declares arrays for use in functions
    int array1[ARRAY_SIZE], array2[ARRAY_SIZE];
		//Function calls to initialize arrays
		initWithInput(array1);
		initWithRandom(array2);

		//Displaying given arrays
		printf("array1:\n");
		printArray(array1);
		printf("... initializing array2 ...\n\n");
		printf("array2:\n");
		printArray(array2);

		//Finding the second highest value in both arrays
		printf("second highest from array1: %d\n",
						findSecondHighest(array1));
		printf("second Highest from array2: %d\n",
						findSecondHighest(array2));
		//Displays the inner product of the arrays
		printf("\ninner product is: %d\n",
						findInnerProduct(array1, array2));
		return 0;
}

void printArray(int arr1[])
{
		for(int i = 0; i < ARRAY_SIZE; i++)
		{
				printf("%d\n", arr1[i]);
		}
}
