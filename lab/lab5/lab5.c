/*
Grant wilkins
CPSC 111 Section 1 Lab 5
This lab will be using conditionals and loops to create
a program where a user can enter a letter or number and receive
the opposite case or the number 
*/

#include<stdio.h>

int main(void)
{
	int truth_value, pass;

	do
	{	//pass variable for later do while
		pass = 0;
		//declare to restart variables each time
		char input, output;
		printf("Enter a letter or number from the keyboard. ");
		scanf(" %c", &input);
		//checks to see if in number ascii range
		if(input <= 57 && input >= 48)
		{
			if(input % 2 == 0)
			{
				printf("   You entered an even number.\n");
			}
			else
			{
				printf("   You entered an odd number.\n");
			}
			input = -1;
		}
		//Checks to see if this is an upper case value 
		else if(input >= 65 && input <= 90)
		{	
			//Converts to a lower case version of the letter
			output = input + 32;
			printf("   The lower case of that letter is: %c.\n", output);
			input = -1;	
		}
		//Checks to see if this is a lower case value
		else if(input <= 122 && input >= 97)
		{
			//Converts to an upper case version of letter
			output = input - 32;
			printf("   The upper case of that letter is: %c\n", output);
			input = -1;
		}
		//Includes a catch statement to ensure there is handling for error ridden inputs
		else
		{
			printf("Invalid input.\n");
			input = -1; 
		}
		//Included to see if an answer has been given previously as part of the other if statements.
		if(input == -1)
		{
			do
			{	
				//Checking to see if this is the first pass, just in case there was a bad input
				if(pass == 0)
				{				

					printf("Would you like to go again? Enter 1 for yes, 0 for no. ");
				}				
				scanf("%d", &truth_value);
				pass++;
				//Checks if this is a valid input.
				if(truth_value != 1 && truth_value != 0)
				{
					printf("Invalid input. Enter a 1 to go again, or a 0 to quit:  ");
				}
			} while(truth_value != 1 && truth_value != 0); //repeats if there wasn't a valid input
		}
	} while(truth_value == 1); //uses truth value to ensure the loop goes again.
	return 0;
}
