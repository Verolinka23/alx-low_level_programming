#include "main.h"


/**
 * _abs - Computers the absolute
 * @c: The number computed
 * Return: Absolute value
 */

int _abs(int c)

{

	if (c < 0)
	{
		int _abs_val;


		_abs_val = c * -1;
		return (_abs_val);
	}

	return (c);

}

