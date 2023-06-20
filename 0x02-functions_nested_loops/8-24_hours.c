#include "main.h"

/**
	* jack_bauer - is the main "function"
*/
void jack_bauer(void)
{
	int m, ml, s, sl;

	m = 0;
	while (m <= 2)
	{
		ml = 0;
		while (ml <= 3)
		{
			s = 0;
			while (s <= 5)
			{
				sl = 0;
				while (sl <= 9)
				{
					_putchar(m + 48);
					_putchar(ml + 48);
					_putchar(':');
					_putchar(s + 48);
					_putchar(sl + 48);
					_putchar('\n');
					sl++;
				}
				s++;
			}
			ml++;
		}
		m++;
	}
}
