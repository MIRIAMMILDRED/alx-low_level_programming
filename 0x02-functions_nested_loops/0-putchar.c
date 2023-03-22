#include "main.h"
/**
 * main - prints _putchar
 *
 * Return: 0 on success
 */
int main(void)
{
	char s[] = "_putchar\n";
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (0);
}
