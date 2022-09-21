#include "main.h"

/**
 * _strcat - Concatenates two strings.
 *
 * @dest: destination
 * @src: source
 *
 * Return: concataned string
 *
 * _strlen - Count len of @dest
 */


 int _strlen(char *s)
 {
   int length = 0;

   while (*s++)
     length++;

   return (length);
 }


char *_strcat(char *dest, char *src)
{
    int i;


    i =_strlen(char *dest);



    while(*scr++)
    *(dest + i++) = *src++;

    printf("%d",i);

  }
