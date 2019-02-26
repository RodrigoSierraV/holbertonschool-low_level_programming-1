#include "holberton.h"
/**
 *_strchr - returns a pointer after finding a similar character
 *
 *returns a pointer after comparing
 *
 *@c: compare
 *@s: string
 *
 *Return: returns what its left of a string after comparing
 **/

char *_strchr(char *s, char c)
{
	int p = 0;

	while (s[p] != '\0')
	{
		if (s[p] == c)
			return (&s[p]);
		s++;
	}
	return (0);
}
