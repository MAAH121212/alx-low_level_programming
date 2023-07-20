#include "main.h"

/**
 * more_numbers - print more numbers
 */

void more_numbers(void)
{
	int carry, times, num;

	for (carry = 1; carry <= 10; carry++)
	{
		for (times = 0; times <= 14; times++)
		{
			num = times;

			if (times > 9)
			{
				_putchar(1 + 48);
				num = times % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}
