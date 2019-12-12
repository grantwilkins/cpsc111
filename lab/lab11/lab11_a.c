/* Grant Wilkins
   CPSC 111 Section 001 Lab 11a Fall 19
   Given two strings, copy one string into
   the other without using strcpy. This is using
	 the normal array construction.
*/

#include<stdio.h>
#include<string.h>
#define LENGTH 31

//Prototype for personal string copy function
void my_strcpy(char dest[], const char src[]);

int main(void)
{
	//declares strings
	char str1[LENGTH], str2[LENGTH];
	printf("Enter a string of length at most 30: ");
	scanf("%s", str1);
	//Copies over the strings using personal function
	my_strcpy(str2, str1);
	printf("You entered: %s\n", str2);
	return 0;
}

//Input: src array with string to be copied
//				dest array to be copied into
//Output: nothing, array dest is changed
void my_strcpy(char dest[], const char src[])
{
	int i;
	for(i = 0; i < strlen(src); i++)
	{
		//Copies each individual element
		dest[i] = src[i];
	}
	dest[i] = '\0';
}
