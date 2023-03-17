#include <stdio.h>
/**
 *main entry function
 *return : should be 0 for success
 */
int main(void)
{
	printf("Size of a char:%d byte(s)", sizeof(char));
	printf("Size of an int:%d byte(s)", sizeof(int));
	printf("Size of a long int:%d byte(s)", sizeof(long int));
	printf("Size of a long long int:%d byte(s)", sizeof(long long int));
	printf("Size of float:%d byte(s)", sizeof(float));
	return (0);
}
