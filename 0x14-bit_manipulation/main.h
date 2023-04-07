#ifndef MAIN_H
#define MAIN_H

unsigned int binary_to_uint(const char *k);
void print_binary(unsigned long int nm);
int get_bit(unsigned long int z, unsigned int index);
int set_bit(unsigned long int *xyz, unsigned int index);
int clear_bit(unsigned long int *a, unsigned int index);
unsigned int flip_bits(unsigned long int d, unsigned long int e );
int _putchar(char c);

#endif
