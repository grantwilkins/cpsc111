/* Lab 2 - Program description:
   The first part of this  program demonstrates operator precedence, 
	integer truncation, and will allow you to change the output of a
	floating point value from 6 decimal places down to 3.

	The second part of this program asks the user to enter a number 
	that represents meters.  It then calculates and shows to
	the user the conversion of meters to feet, yards, and miles.

	The scanf() function is used for user input and also comes from stdio.h
	like printf().

	The const keyword is used with the variable declarations for the 
	conversion multipliers of each.  
*/


/* Lab 2 - Instructions:
   
	1. Copy this file into another file called lab2.c.
	
	2. Open another ssh/putty shell or terminal window so that you have two
	   windows open.  In one window, open up lab2.c in an editor. In 
		the other window compile lab2.c. 
		
		In the window with lab2.c open, start fixing the errors according 
		to the compile errors shown in the other window, leaving a comment 
		before each line that contained errors.  In your comment, explain 
		what the error was.  

	3. You should always start at the top of the list of errors shown
	   after compiling.  After each fix, save the file, and in the other 
		window, re-compile again. You should see that list of errors
		get smaller each time you make some fixes and re-compile.
		Don't forget to use the -Wall option when compiling to see all 
		the warnings that may be present:   gcc -Wall lab2.c

		*** 8 errors and 6 warnings show up when you compile this file.

	4. Once you have all the errors fixed and comments preceding each
	   line that contained an error, in the window where you did your
		compiling, open up errors.c.  Use this file to view these 
		instructions in the big comment at the top. In lab2.c, you will 
		get rid of this big comment at the top, so using errors.c, the 
		original file, you will still have access to them.
		
		You want to have only your normal, proper header as required at
		the top of your program.

	5. Besides understading compiler errors and fixing the errors, there
	   are two parts to this program.
		a. The first part shows operator precedence, integer truncation,
		   and how to limit the number of decimal places of a floating point
			value printed to the screen.
		b. The second part shows how to get a value entered by the user 
			representing distance in meters and convert it to feet, yards,
			and miles.  It also shows const variables as well.

	6. After fixing the errors, the first line of output should be:
				result of  y + z / x  is 3, NOT -1.142857

		Change the output of -1.142857 so that it prints to 3 decimal places:
				result of  y + z / x  is 1, NOT -1.143

	7. For the second part, do some testing with various numbers.
		Use 13.1 for meters as one of your tests.  You should get the following 
		printed to the screen:
				13.1000 meters is 42.979004 feet
				13.1000 meters is 14.326292 yards
				13.1000 meters is 0.008140 miles
		
	8. Do another test using 283.1752 for radius. You should get the following 
		printed to the screen:
				283.1752 meters is 929.052490 feet
				283.1752 meters is 309.683258 yards
				283.1752 meters is 0.17596 miles

  9.  After you have done all these steps, then you can submit your fixed 
		lab2.c to handin.  Your TA can help you if you have trouble doing that.  
*/



#include <stdio.h>

int main (void) {

	// variables for showing precedence and integer truncation
	int x = 7, y = 4, z = -12, result:

	// variables needed for conversions
	float meters, feet, yards miles;	
	const float feetMultiplier = 3.28084, 
	  				yardsMultiplier = 1.09361,
					milesMultiplier = .000621371;

	// Show precedence and integer truncation
	result = y + z / x;
	printf("\nresult of  y + z / x  is %d, NOT %f  \n', 
		    result, (float)(y + z) / x);


	// Get user input 
	printf("\n\n** Distance Conversions **\n\n";
	printf("Enter distance in meters: ");  			
	scanf("%f, &meters);     			

	/*** conversions ***/
	// meters to feet:
	feet = meters * feetMultiplier;

	// meters to yards:
	yards = meters * yardsMultiplier;

	// meters to miles:
	miles = meters * milesMultiplier;


	// Print results
	printf("\n%.4f" meters);
	printf(" meters is ");
	printf("f", feet);
	printf(" feet \n");

	printf(%.4f meters is %f yards\n", 
			 meters, yards);

	printf("%.4f meters is %f miles\n\n", meters miles);

	return 0;
}



