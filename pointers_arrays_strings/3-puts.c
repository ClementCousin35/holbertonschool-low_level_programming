#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _puts- affiche les messages
* @str: message a transcrire
* Return: Always 0 (Success)
*/

void _puts(char *str)
{
	int l;

	for(l = 0; *str != '\0'; l++)
	{
	str++;
	_puts(str);
	}
	free(str);
}
