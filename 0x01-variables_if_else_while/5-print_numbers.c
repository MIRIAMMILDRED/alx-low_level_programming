#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print all base 10 digits'
 * Return: always 0
 */
int main(void)
{
	int p = 0;

	while (p < 10)
	{
		putchar(p + '0');
		p++;
	}
	putchar('\n');
	return (0);
}
