//Grant Wilkins
//Lab 9 CPSC 111 Section 001
//This is the innerProduct.c file which includes the 
//innerProduct definition and returns the innerProduct
#include"defs.h"
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
