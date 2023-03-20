#include <stdio.h>
/**
 * main - entry point
 * Description: ' hexadecimal print '
 * Return: always 0
 */
int main(void)
{
	int r = 0;

	while (r < 16)
	{
		if (r < 10)
		{
			putchar(r + '0');
		}
		else
		{
			putchar(r - 10 + 'a');
		}
		r++;
	}
	putchar('\n');
	return (0);
}
