#include <stdio.h>
/**
 * _strlen - returns the length of a string
 * @s: The string to get the length of string
 * Return: he length of @s.
 */
int _strlen(char *s)
{
size_t length = 0;
while (*s++)
length++;
return (length);
}
