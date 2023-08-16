#include "main.h"

/**
  * print_last_digit - Entry point
  * Description: print_last_digit of a number
  * @n: The number to compute last digit
  * Return: last digit
  */

int print_last_digit(int n)

{
	int print_last_digit;

	print_last_digit = n % 10;
	if (print_last_digit < 0)
	{
	print_last_digit = print_last_digit * -1;
	}
	_putchar(print_last_digit + '0');
	return (print_last_digit);
}
