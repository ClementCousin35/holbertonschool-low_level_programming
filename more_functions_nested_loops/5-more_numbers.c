#include "main.h"

/**
*more_numbers- ecrire des chiffres en 10 fois
*Return: Always 0 (Success)
*/
void more_numbers(void)
{

	char c;
	char e;
	int n;

	for (c = '0'; c <= '9'; c++)
	{
		for (e = '0'; e <= '9'; e++)
		{
		_putchar(e);
		}
		for (n = 97; n <= 101; n++)
		{
		_putchar(n);
		}
	_putchar('\n');
	}
}
