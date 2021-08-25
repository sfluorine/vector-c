#ifndef VECTOR_H_
#define VECTOR_H_

#include <stdlib.h>

typedef struct iVector 
{
  size_t size;
  size_t capacity;
  int * data;
} iVector;

iVector iVectorInit()
{
  iVector buffer;

  buffer.size = 0;
  buffer.capacity = 2;
  buffer.data = calloc(buffer.capacity, sizeof(int));

  return buffer;
}

void iVectorReserve(iVector * vector, int size)
{
  vector->capacity += size;
  vector->data = realloc(vector->data, sizeof(int) * vector->capacity);
}

void iVectorPushback(iVector * vector, int data)
{
  if (vector->size == vector->capacity)
  {
    iVectorReserve(vector, 2);
    vector->data[vector->size] = data;
    vector->size++;
}
  else
  {
    vector->data[vector->size] = data;
    vector->size++;
  }
}

void iVectorFree(iVector * vector)
{
  free(vector->data);
}

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

#endif // VECTOR_H
