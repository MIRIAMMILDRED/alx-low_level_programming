#include <stdio.h>
/**
 * main -Entry point
 * Description: 'print alphabets in lower case except for q and e'
 * Return: always 0
 */
int main(void)
{
	int r = 97;

	while (r <= 122)
	{
		if (r == 101 || 113)
		{
			r++;
			continue;
		}
		putchar(r);
		r++;
	}
	putchar('\n');
	return (0);
}
