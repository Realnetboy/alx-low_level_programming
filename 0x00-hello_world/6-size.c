
#include <stdio.h>

/**
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
	printf("Size of char: %d byte(s)\n", sizeof(a));
       printf("Size of an int: %d byte(s)\n", sizeof(b));
       printf("Size of a long int: %d byte(s)\n", sizeof(c));
       printf("Size of a long long int: %d byte(s)\n", sizeof(d));
       printf("size of a float: %d byte(s)\n", sizeof(e));
       return (0);
}

