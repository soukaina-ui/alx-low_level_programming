#include "main.h"
/**
  * more_numbers - prints 10 times the numbers between 0 and 14
  *			followed by a new line
  * Return: void
  **/
void more_numbers(void)
{
	int count, i;

	for (count = 1; count <= 10; count++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			_putchar('1');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
