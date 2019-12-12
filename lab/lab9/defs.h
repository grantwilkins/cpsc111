//Grant Wilkins
//Lab 9 CPSC 111 Section 001
//This is the defs.h file which holds the prototypes and the different
//functions and holds the ability to share multimodules across programs
#ifndef DEFS_H
#define DEFS_H
#define ARRAY_SIZE 20
#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
//External Variables

//Function Prototypes
void initWithInput(int arr1[]);
void initWithRandom(int arr1[]);
int findHighest(int arr1[]);
int findSecondHighest(int arr1[]);
int findInnerProduct(int arr1[], int arr2[]);

#endif
