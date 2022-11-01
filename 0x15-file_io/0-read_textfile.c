#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
* read_textfile - that reads a text file and prints
* @filename: variable pointer
* @letters: size letters
* Description: Write a function that reads a text file and prints it
* to the POSIX standard output.
*
* Return: the actual number of letters it could read and print, 0 otherwise
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t let_r, let_w;
int fichier;
char *text;
text = malloc(sizeof(char) * letters);

if (filename == NULL)
{
return (0);
}
fichier = open(filename, O_RDONLY);
if (fichier == -1)
{
close(fichier);
return (0);
}
if (text == NULL)
{
close(fichier);
return (0);
}

let_r = read(fichier, text, letters);
close(fichier);

if (let_r == -1)
{
free(text);
return (0);
}

let_w = write(STDOUT_FILENO, text, let_r);
free(text);

if (let_r != let_w)
return (0);

return (let_w);

}
