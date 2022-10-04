#ifndef MAIN_H
#define MAIN_H

/**
 * main - header file for prototype
 * void prototypes (v0id)
 * int prototypes (int)
 */
int _putchar(char);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);

#endif /* MAIN_H */
