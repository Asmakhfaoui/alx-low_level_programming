#include "main.h"

/**
 *print_alphabet - print the alphabet
 * @c: The character to print
 * Return: void
 */
void print_alphabet(void)
{
	char letter = 'a';
	
	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
