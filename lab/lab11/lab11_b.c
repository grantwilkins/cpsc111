/* Grant Wilkins
   CPSC 111 Section 001 Lab 11b Fall 19
   Given two strings, copy one string into
   the other without using strcpy. This will
   implement a dynamic memory allocation
   versus the normal array construction.
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void my_strcpy(char *dest, const char *src);

int main(void)
{
  //Declars length and two string pointers
  int length;
  char *str1, *str2;
  printf("What is the longest length of a string that you will enter? ");
  scanf("%d", &length);

  //Allocates memory for the two strings
  str1 = malloc((length+1)*sizeof(char));
  str2 = malloc((length+1)*sizeof(char));
  //Checks if enough memory was allocated
  if(str1 == NULL || str2 == NULL)
  {
    printf("malloc failed to allocate enough memory!\n");
    return 0;
  }
  printf("Enter a string: ");
  scanf("%s", str1);
  my_strcpy(str2, str1);
  printf("You entered: %s\n", str2);
  return 0;
}

//Input: src pointer with string to be copied
//				dest pointer to be copied into
//Output: nothing, pointer dest is changed
void my_strcpy(char *dest, const char *src)
{
  //Copies array elements until there is no src to copy
  while((*dest = *src))
  {
    //Increments to next place in memory.
    (void)*src++;
    (void)*dest++;
  }
  //Ensures the exit character is copied
  *dest = '\0';
}
