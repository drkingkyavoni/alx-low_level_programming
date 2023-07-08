#ifndef BIT_MANIPULATION_H
#define BIT_MANIPULATION_H


/**
  * flip_bits - function to count flipped bits
  * @n: unsigned long int
  * @m: unsigned long int
  * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m);


/**
 * count_set_bits - count set bits
 * @n: unsigned long int
 * Return: unsigned int
 */

unsigned int count_set_bits(unsigned long int n);

/**
 * _putchar - write to stdout a character
 * @c: char
 */
void _putchar(char c);

/**
 * binary_to_unit - converts a binary number to an int
 * @b: const char pointer
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b);

/**
 * binary_to_unit - prints the binary of a number
 * @n: unsigned long int
 * Return: void
 */
void print_binary(unsigned long int n);

/**
 * print_n_binary - prints the binary of a number
 * @n: unsigned long int
 * Return: void
 */
void print_n_binary(unsigned long int n);


/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long int
 * @index: unsigned int
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index);


/**
 * set_bit - inserts 1 to the bit value at an index
 * @n: unsigned long int pointer
 * @index: unsigned int
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index);


/**
 * clear_bit - sets 0 to the bit value at an index
 * @n: unsigned long int pointer
 * @index: unsigned int
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index);

#endif /* BIT_MANIPULATION_H*/
