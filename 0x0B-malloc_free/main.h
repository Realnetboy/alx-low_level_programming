#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

void free_grid(int **grid, int height);
char *str_concat(char *s1, char *s2);
char *strdup(char *str);
int _putchar(char c);
char *create_array(unsigned int size, char c);
int **alloc_grid(int width, int height);
char *argstostr(int ac, char **av);
char *strtow(char *str);

#endif /* MAIN_H */
