#include "main.h"

/**
 *_strlen - count the length of a string
 *@s: string
 *
 *Return: the value of the length l
 */

int _strlen(char *s)
{
int l = 0;

while (s[l])
l++;

return (l);
}
