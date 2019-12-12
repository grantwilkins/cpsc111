/*
Grant Wilkins
CPSC 111 Fall 2019 Section 001
This is the main file of the program which instantiates the
parameters of the food struct and then prints to the screen.
*/
#include "defs.h"
int main(int argc, char* argv[])
{
		//Finds size of array by opening file
		int size_array = 0;
	  FILE *myFile;
    //opens files using command line
    myFile = fopen(argv[1], "r");
    fscanf(myFile, "%d", &size_array);
		//Declares array of structs with dynamic memory
		food *myFood = (food *)calloc(size_array, sizeof(food));
		for(int i = 0; i < size_array; i++)
		{
				//instantiates each paramter in the struct
				fscanf(myFile,"%s", myFood[i].item);
				fscanf(myFile,"%s", myFood[i].quantity);
				fscanf(myFile,"%d", &myFood[i].calories);
				fscanf(myFile,"%f", &myFood[i].protein);
				fscanf(myFile,"%f", &myFood[i].carbs);
				fscanf(myFile,"%f", &myFood[i].fats);
		}

		//prints array
		printArray(myFood, size_array);

    fclose(myFile);
		return 0;
}
