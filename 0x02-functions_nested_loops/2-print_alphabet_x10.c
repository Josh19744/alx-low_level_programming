#include "main.h"
/**
 *print_alphabet_x10 - this is the main function of the task
 *
 *Result: always return 0
 */
void print_alphabet_x10(void)
{
int t;
char f;
for (t = 0; t < 10; t++)
{

for (f = 'a'; f <= 'z'; f++)
{
_putchar(f);
}
_putchar('\n');
}
}
