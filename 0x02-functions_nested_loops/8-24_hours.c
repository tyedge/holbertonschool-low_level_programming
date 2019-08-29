#include "holberton.h"

/**
 * jack_bauer - prints a 24 hour
 * clock.
 *
 * Return: void
 *
 */

void jack_bauer(void)
{
	int hr_tens, hr_ones, mins, secs;

	for (hr_tens = 0; hr_tens < 3; hr_tens++)
	{
		for (hr_ones = 0; hr_ones < 10; hr_ones++)
		{
			for (mins = 0; mins < 6; mins++)
			{
				for (secs = 0; secs < 10; secs++)
				{
					if (hr_tens >= 2 && hr_ones >= 4)
					{
						break;
					}
					_putchar(hr_tens + '0');
					_putchar(hr_ones + '0');
					_putchar(58);
					_putchar(mins + '0');
					_putchar(secs + '0');
					_putchar('\n');
				}
			}
		}
	}
}
