#include "main.h"
/**
 * factorial - factorial of a given number.
 * @n: the number to calculate the factorial
 * Return: integer value
 */
int factorial(int n)
{
if (n < 1)
return (-1);
if (n <= 1)
return (1);
return (n * factorial(n - 1));
}
