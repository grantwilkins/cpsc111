/*
Grant Wilkins
CPSC 111 Fall 2019 Section 001
The defs.h file coordinates and links the datatypes and
dependencies across multiple files. In this case the FOOD
struct and the printArray prototype are declared here.
*/
#ifndef DEFS_H
#define DEFS_H
#include<stdio.h>
#include<stdlib.h>

//Declares food struct and the list of its data.
typedef struct food
{
		char item[20];
		char quantity[10];
		int calories;
		float protein, carbs, fats;
}food;

//printArray datatype
void printArray(food myFood[], int size);

#endif
