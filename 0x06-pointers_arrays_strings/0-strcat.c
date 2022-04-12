#include "main.h"
/**
*_strcat - function that concatenates two strings.
*@dest: pointer to destination string.
*@src: pointer to source string.
*
*Return: pointer to destination string.
 */
char *_strcat(char *dest, char *src)
{
int idris, j;

idris = 0;
while (dest[idris] != '\0')
{
idris++;
}
for (j = 0; src[j] != '\0'; j++, idris++)
{
dest[idris] = src[j];
}
dest[idris] = '\0';
return (dest);
}
