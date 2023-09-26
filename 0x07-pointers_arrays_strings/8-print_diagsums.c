#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (success)
 */
void print_diagsums(int *a, int size)
{
int j, f, sum1 = 0, sum2 = 0;
for (j = 0; j <= (size * size); j = j + size + 1)
sum1 = sum1 + a[j];
for (f = size - 1; f <= (size * size) - size; f = f + size - 1)
sum2 = sum2 + a[f];
printf("%d, %d\n", sum1, sum2);
}
