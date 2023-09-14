#include "main.h"
/**
 *_islower - check for lowercase character
 *@c: character to be checked then return
 *Return: 0 0r 1
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
