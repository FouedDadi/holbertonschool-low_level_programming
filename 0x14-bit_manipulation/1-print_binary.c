#include "holberton.h"
/**
 *print_biinary- function that print binary rep
 *@n: number
 */
void print_binary(unsigned long int n)
{
int x;
x = (n & 1) + '0';
if (n > 1)
print_binary(n >> 1);
_putchar(x);
}
