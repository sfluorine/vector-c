# What is this?
My implementation for vector in C.\
It's still missing important feature tho, like 'popback', etc.

# How do i use this?
Just clone this repo and include vector.h into your program.

# Example

``` C

#include <stdio.h>
#include "include/vector.h"

int main()
{
  // This is integer vector
  iVector intVect = iVectorInit();
  iVectorPushback(&intVect, 10);
  iVectorPushback(&intVect, 20);

  for (size_t i = 0; i < intVect.size; i++)
    printf("%d \n", intVect.data[i]);

  iVectorFree(&intVect);
  
  // This is string vector
  sVector stringVect = sVectorInit();
  sVectorPushback(&stringVect, "Hello ");
  sVectorPushback(&stringVect, "world!");

  for (size_t i = 0; i < stringVect.size; i++)
    printf("%s", stringVect.data[i]);

  printf("\n");
  sVectorFree(&stringVect);
}


```
