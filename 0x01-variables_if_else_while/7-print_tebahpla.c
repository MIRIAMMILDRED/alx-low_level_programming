#include <stdio.h>
/**
 * main - entry point
 * Description: 'print lowercase in reverse'
 * Return: always 0
 */
int main(void)
{
	int p = 122;

	while (p >= 97)
	{
		putchar(p);
		p--;
	}
	putchar('\n');
	return (0);
}
