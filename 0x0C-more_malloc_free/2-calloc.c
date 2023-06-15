#include <stdlib.h>
#include "main.h"
/**
  * _calloc - allocates memory of an array using malloc.
  * @nmemb: number of elements in array.
  * @size: size of elements of array.
  *
  * Return: NULL is size or nmemb == 0.
  * NULL if malloc fails.
  * Pointer to memory allocated if successful.
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr; /* Pointer to the allocated memory */
	unsigned int total_size;

	/* Check for zero nmemb or size */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Calculate the total size of the allocation */
	total_size = nmemb * size;

	/* Allocate memory using malloc */
	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	for (total_size = 0; total_size < (nmemb * size); total_size++)
	{
		*((char *)(ptr) + total_size) = 0;
	}
	return (ptr);
}
