#ifndef MAIN_H
#define MAIN_H

/**
 * main - header file for prototype
 * void prototypes (void)
 * int prototypes (int)
 */

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
int get_endianness(void);
int _putchar(char c);

#endif /* MAIN_H */
