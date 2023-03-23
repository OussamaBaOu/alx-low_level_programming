#include "main.h"
/**
 * more_numbers - print more numbers
 * return: void
 */
void more_numbers(void)
{
	int c, h;

	for (c = 1; c <= 10; c++)
	{
		for (h = 0; h <= 14; h++)
		{
			if (h >= 10)
				_putchar('1');
			_putchar (h % 10 + '0');
		}
		_putchar('\n');
	}
}
