/* Grant Wilkins
 * CPSC 1111 Section 001
 * Lab 8: User Defined Functions
 * The goal of this lab is to modify lab 7 to be defined
 * in terms of functions instead of one main method.
 */

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define ARRAY_SIZE 20


void initWithInput(int arr1[]);
void initWithRandom(int arr1[]);
int findHighest(int arr1[]);
int findSecondHighest(int arr1[]);
int findInnerProduct(int arr1[], int arr2[]);
void printArray(int arr1[]);

int main(void)
{
		//Declares arrays for use in functions
		int array1[ARRAY_SIZE];
		int array2[ARRAY_SIZE];

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

//Finds the highest integer in the array
//INPUT: Array we wish to find the max element of
//OUTPUT: Integer value of the maximum element in the array
int findHighest(int arr1[])
{
		//Finds highest by looking for values higher than
		//the current highest, starts with INT_MIN as
		//an absolute minimum for the array.
		int highest = INT_MIN;
		for(int i = 0; i < ARRAY_SIZE; i++)
		{
				if(arr1[i] > highest)
				{
						highest = arr1[i];
				}
		}
		return highest;
}

//Finds the second highest integer in the array using
//the highest value function
//INPUT : Array we wish to find the second highest element of
//OUTPUT : Integer value of the second highest value in the array
int findSecondHighest(int arr1[])
{
		//Uses same algorithm as findHighest, yet
		//is able to detect secondHighest by just
		//finding the highest that isn't equal to
		//the highest in the array
		int highest = findHighest(arr1);
		int secondHighest = INT_MIN;
		for(int i = 0; i < ARRAY_SIZE; i++)
		{
				if(arr1[i] > secondHighest && arr1[i] != highest)
				{
						secondHighest = arr1[i];
				}
		}
		return secondHighest;
}

//Finds the inner product of the two arrays
//INPUT : Two arrays of equal size to find inner product of
//OUTPUT: An integer that is the inner product.
int findInnerProduct(int arr1[], int arr2[])
{
		//Calculates inner product using a symmetric
		//product where respective elements are multiplied
		int innerProduct = 0;
		for(int i = 0; i < ARRAY_SIZE; i++)
		{
				innerProduct += arr1[i]*arr2[i];
		}
		return innerProduct;
}

//Displays a given array on separate lines
//INPUT : An array we wish to print
//OUTPUT : Void, prints array to terminal.
void printArray(int arr1[])
{
		for(int i = 0; i < ARRAY_SIZE; i++)
		{
				printf("%d\n", arr1[i]);
		}
}
