#include <stdio.h>
/**
 *main - entry point
 *Description: 'lowercase alphabet in reverse,then  new line'
 *Return: always 0 for success
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}

	putchar('\n');

	return (0);
}
