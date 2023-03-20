#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int h = '0'; /* digit at hundredth location */
	int t = '1'; /* digit at tenth location */
	int u = '2'; /* digit at unit location */

	while (h <= '7')
	{
		while (t <= '8')
		{
			while (u <= '9')
			{
				putchar(h);
				putchar(t);
				putchar(u);
				if (h != '7' || t != '8' || u != '9')
				{
					putchar(',');
					putchar(' ');
				}
				u++;
			}
			t++;
			u = t + 1;
		}
		h++;
		t = h + 1;
		u = t + 1;
	}
	putchar('\n');
	return (0);
}
