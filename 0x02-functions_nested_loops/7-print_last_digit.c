#include "main.h"

/**
* print_last_digit - of a number
* @n: return value of last digit
* Return: Always 0
*/

int print_last_digit(int n)
{
	int lastdigit;

	lastdigit = (n % 10);

	if (lastdigit < 0)
	{
		lastdigit = (lastdigit * -1);
	}
	_putchar(lastdigit + '0');
	return (lastdigit);
}
