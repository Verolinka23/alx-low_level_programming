#include "main.h"

/**
 * _islower - entry point
 * function that checks for lowercase character
 * @c:character to check if it islowercase
 * Return: 0-if lowercase character, 1-if anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	else
	{
	return (0);
	}

}
