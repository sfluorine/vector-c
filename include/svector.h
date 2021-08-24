#ifndef SVECTOR_H_
#define SVECTOR_H_

#include <stdlib.h>

typedef struct sVector
{
    size_t size;
    size_t capacity;
    char ** data;
} sVector;

sVector sVectorInit()
{
    sVector buffer;
    buffer.size = 0;
    buffer.capacity = 2;
    buffer.data = malloc(sizeof(char *) * buffer.capacity);

    return buffer;
}

void sVectorReserve(sVector * vector, int size)
{
    vector->capacity += size;
    vector->data = realloc(vector->data, sizeof(char *) * vector->capacity);
}

void sVectorPushback(sVector * vector, char * data)
{
    if (vector->size == vector->capacity)
    {
        sVectorReserve(vector, 2);
        vector->data[vector->size] = data;
        vector->size++;
    } 
    else 
    {
        vector->data[vector->size] = data;
        vector->size++;
    }
}

void sVectorFree(sVector * vector)
{
    free(vector->data);
}

#endif // SVECTOR_H_
