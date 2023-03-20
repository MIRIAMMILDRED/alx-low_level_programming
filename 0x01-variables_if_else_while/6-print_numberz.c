#include <stdio.h>
/**
 * main - Entry point
 * Description: ' prints single base 10 digits '
 * Return: always 0
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');
	return (0);
}
