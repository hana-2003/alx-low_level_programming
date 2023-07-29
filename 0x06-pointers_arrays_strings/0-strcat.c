#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
int dest_len = 0, i;

/* Find the length of dest string */
while (dest[dest_len] != '\0')
dest_len++;

/* Append the src string to dest */
for (i = 0; src[i] != '\0'; i++)
dest[dest_len + i] = src[i];

/* Add null terminator to dest */
dest[dest_len + i] = '\0';

return dest;
}
