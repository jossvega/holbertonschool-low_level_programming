#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: input char
 * Return: char
 */

char *_strdup(char *str)
{
	char *cpy;
	unsigned int x = 0;
	unsigned int z = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[x] != '\0')
	{
		x++;
	}
	x++;
	cpy = malloc(x * sizeof(*cpy));
	if (cpy == NULL)
	{
		return (NULL);
	}
	while (z < x)
	{
		cpy[z] = str[z];
		z++;
	}
	return (cpy);
}

/**
 *new_dog - function that creates a new dog
 *@name: name of dog
 *@age: age of dog
 *@owner:owner of dog
 *Return: new struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
		return (NULL);
	(*new_dog).name = _strdup(name);
	if ((*new_dog).name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	(*new_dog).age = age;
	(*new_dog).owner = _strdup(owner);
	if ((*new_dog).owner == NULL)
	{
		free(new_dog);
		free((*new_dog).name);
		return (NULL);
	}
	return (new_dog);
}
