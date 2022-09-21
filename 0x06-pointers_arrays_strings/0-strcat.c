#include "main.h"

/**
 * _strcat - Concatenates two strings.
 *
 * @dest: destination
 * @src: source
 *
 * Return: concataned string
 *
 *
 */

char *_strcat(char *dest, char *src)
{
	int i = 1;

	while (*dest++)
	        i++;


	i = i - 1;

    	while(*src++)
    		*(dest + (i++ - 1)) = *src++;

	return (src);
  }
