/*
Grant Wilkins
CPSC 111 Fall 2019 Section 001
This is the main file of the program which instantiates the
parameters of the food struct and then prints to the screen.
*/
#include "defs.h"
int main(void)
{
		//Finds size of array
		int size_array;
		scanf("%d", &size_array);

		//Declares array of structs
		food myFood[size_array];
		for(int i = 0; i < size_array; i++)
		{
				//instantiates each paramter in the struct
				scanf("%s", myFood[i].item);
				scanf("%s", myFood[i].quantity);
				scanf("%d", &myFood[i].calories);
				scanf("%f", &myFood[i].protein);
				scanf("%f", &myFood[i].carbs);
				scanf("%f", &myFood[i].fats);
		}

		//prints array
		printArray(myFood, size_array);

		return 0;
}
