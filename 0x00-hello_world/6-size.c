#include <stdio.h>
/**
 *main - entry point
 *Description: 'sizeof characters'
 *Return: should be 0 for success
 */
int main(void)
{
	printf("Size of a char:%2lu byte(s)\n", sizeof(char));
	printf("Size of an int:%2lu byte(s)\n", sizeof(int));
	printf("Size of a long int:%2lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int:%2lu byte(s)\n", sizeof(long long int));
	printf("Size of float:%2lu byte(s)\n", sizeof(float));
	return (0);
}
