# What is this?
My implementation for integer vector in C
It's still missing important feature tho, like 'popback', etc.

# How do i use this?
Just clone this repo and include ivector.h into your program.

# Example

``` C

#include <stdio.h>
#include "include/ivector.h"


int main()
{
    iVector myVector = iVectorInit();

    for (int i = 0; i < 10; i++)
        iVectorPushback(&myVector, i);

    for (int i = 0; i < myVector.size; i++)
        printf("%d \n", myVector.data[i]);

    iVectorFree(&myVector);
}


```
