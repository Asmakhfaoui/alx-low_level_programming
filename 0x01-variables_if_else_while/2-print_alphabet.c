#include <stdio.h>
/**
 *main - entry point
 *description: 'this programme prints characteres lowercase'
 *return is always 0
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar (n);
		n++;
	}
	putchar ( );
	return(0);
}
