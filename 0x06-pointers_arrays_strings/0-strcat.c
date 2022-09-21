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
    int i;

    while (*dest++)
      {
        i++;
      }



    while(*src++)
    *(dest + i++) = *src++;

	return (src);
  }
