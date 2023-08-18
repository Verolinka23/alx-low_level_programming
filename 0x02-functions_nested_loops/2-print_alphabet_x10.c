#include "main.h"

/**
  * print alphabet_x10 - x10 lower case alphabet
  * Return: void
  */

void print_alphabet_x10(void)
{

	char ve;
	int f;

	f = 0;
	while (f < 10)
{
	for (ve = 'a'; ve < = 'z'; ve++)
{
	_putchar(ve);
}
	_putchar ('\n');
	f++;
}

}
