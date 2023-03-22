/*******************************************************************************
*
* Purpose: Prints the maximum number of any number of int command-line 
* arguments that are provided.  So if this program is run with:
*   ./max 5 10 20 25 15
* then we can expect it to print 25.
*
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "library.h"

int main(int argc, char *argv[])
{

  int nums[argc-1];
  
  // read in command-line arguments as integers
  for (int i = 1; i < argc; i++)
  {
    nums[i-1] = atoi(argv[i]);
  }
  
  // find the maximum integer using the max function from library.c
  int maximum = max(nums, argc-1);
  
  printf("%d\n", maximum);


  return 0;
}
