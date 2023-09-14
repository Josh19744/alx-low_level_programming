#include "main.h"
/**
 * print_line - function draws a straigt line in the terminal
 * @n: number of the times the character _ should br printed
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i;
for (i = 1; i <= n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
