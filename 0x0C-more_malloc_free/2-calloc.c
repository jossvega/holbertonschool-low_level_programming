#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: input int 1
 * @size: input int 2
 * Return: nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * sizeof(size));
	if (ptr == NULL)
		free(ptr);

	return (ptr);
}
