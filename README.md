# What is this?
My implementation for vector in C.\
It's still missing important feature tho, like 'popback', etc.

# How do i use this?
Just clone this repo and include ivector.h or svector.h into your program.

# Example

``` C

#include <stdio.h>
#include "include/svector.h"
#include "include/ivector.h"

int main()
{
    iVector intVect = iVectorInit();
    iVectorPushback(&intVect, 10);
    iVectorPushback(&intVect, 20);

    for (size_t i = 0; i < intVect.size; i++)
        printf("%d \n", intVect.data[i]);

    iVectorFree(&intVect);

    sVector stringVect = sVectorInit();
    sVectorPushback(&stringVect, "Hello ");
    sVectorPushback(&stringVect, "world!");

    for (size_t i = 0; i < stringVect.size; i++)
        printf("%s", stringVect.data[i]);

    printf("\n");
    sVectorFree(&stringVect);
}


```

# Note
This is just for integer only, soon i will add other data types.
