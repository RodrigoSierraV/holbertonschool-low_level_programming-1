#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - creates an array of chars, and initializes it with a char.
 *
 *@size: length determine by user
 *@c:character to fill memory
 *
 *Return: zero
 **/

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	a = malloc(sizeof(char) * size);

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}