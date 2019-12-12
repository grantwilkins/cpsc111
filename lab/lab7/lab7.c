/*
	Grant Wilkins
	CPSC 111 Section 001
	Input an array from the user, then generate a random array.
	Find the second largest element in each array.
	Print Inner Product.
*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{	
	//Declare variables
	int array1[20];
	int array2[20];
	int arr1_second, arr2_second, inner_prod, temp1, temp2;
	//Prompt user
	printf("Enter 20 integers:\n\n");
	for(int i = 0; i < 20; i++)
	{	
		//Scans for the array1 integers
		scanf("%d", &array1[i]);
	}
	for(int j = 0; j < 20; j++)
	{	
		//Makes a random into from 1 to 50 the value
		array2[j] = 1+ (rand() % 50);
	}
	//Loop to print array1
	printf("array1:\n");
	for(int n = 0; n < 20; n++)
	{
		printf("%d\n", array1[n]);
	}
	//Loop to print array2
	printf("\narray2:\n");
	for(int p = 0; p < 20; p++)
	{
		printf("%d\n", array2[p]);
	}
	
	printf("\n");
	temp1 = 0;
	temp2 = 0;
	for(int k = 0; k < 20; k++)
	{	
		//Design is to look if an array element is the max
		//If it is not the max (temp1) then we check if
		//it is greater than the second element
		//so if it is the between second and max it gets
		//written in.
		if(array1[k] > temp1)
		{
			arr1_second = temp1;
			temp1 = array1[k];
		}
		else if(array1[k] > arr1_second && array1[k] != temp1)
		{
			arr1_second = array1[k];
		}
		

		//Same algorithm, different array
		if(array2[k] > temp2)
		{
			arr2_second = temp2;
			temp2 = array2[k];
		}
		else if(array2[k] > arr2_second && array2[k] != temp2)
		{
			arr2_second = array2[k];
		}
	}
	
	//Calculates inner product by calculating respective
	//elements in each array
	inner_prod = 0;
	for(int m = 0; m < 20; m++)
	{
		inner_prod += array1[m]*array2[m];
	}
	//Output results
	printf("second highest from array1 is: %d\n", arr1_second);
	printf("second highest from array2 is: %d\n", arr2_second);
	printf("\ninner product is: %d\n", inner_prod);
	return 0;
}
