#include <stdio.h>
/**
 * main - entry
 * Description: 'all digits it twos'
 * Return: always 0
 */
int main(void)
{
	int r = 0;

	while (r < 90)
	{
		int m = r + 1;

		while (m < 100)
		{
			putchar(r / 10 + '0');
			putchar(r % 10 + '0');
			putchar(',');
			putchar(' ');
			putchar(m / 10 + '0');
			putchar(m % 10 + '0');
				if (r != 98)
				{
					putchar(',');
					putchar(' ');
				}
			m++;
		}
		r++;
	}
		putchar('\n');
	return (0);
}
