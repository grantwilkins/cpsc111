/*
Grant Wilkins
CPSC 111 Fall 2019 Section 001
array processing to properly format and print the output
of the food struct in a table format.
*/

#include "defs.h"

//Prints array with the input array of structs
//and size of the struct array.
void printArray(food *myFood, int size)
{
	printf("FOOD ITEM                    QUANTITY  CALS     PRO CARBS   FAT\n");
	//Prints each element in the struct array.
	for(int i = 0; i < size; i++)
	{
		//Special formatting tools to make sure the table format
		//is preserved properly.
		printf("%d. ", i+1);
		printf("%-16s", myFood[i].item);
		printf("%18s", myFood[i].quantity);
		printf("%-3s", " ");
		printf("%3d", myFood[i].calories);
		printf("%-3s", " ");
		printf("%5.2f", myFood[i].protein);
		printf("%-2s", " ");
		printf("%3.2f", myFood[i].carbs);
		printf("%-2s", " ");
		printf("%.2f", myFood[i].fats);
		printf("\n");
	}
}
