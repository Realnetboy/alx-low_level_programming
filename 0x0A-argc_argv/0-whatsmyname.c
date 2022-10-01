#include <stdio.h>

/**
 * main - prints the name of the program
 * if you rename the program, it will print the new name, without having to 
 * compile it again
 * you should not remove the path before the name of the program
 *
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
