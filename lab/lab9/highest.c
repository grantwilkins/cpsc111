//Grant Wilkins
//Lab 9 CPSC 111 Section 001
//This is the highest.c file which includes the secondHighest element
//function to find such in an array.

#include"defs.h"
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
