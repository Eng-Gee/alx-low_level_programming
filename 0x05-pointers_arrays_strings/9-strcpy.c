#include "main.h"

/**
 * *_strcpy - copy string
 * @dest: destination array
 * @src: source of array
 * Return: destination
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
		dest[i] = src[i];
	return (dest);
}
