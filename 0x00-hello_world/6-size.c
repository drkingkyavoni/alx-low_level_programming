/*
 * This code prints the size of various types on the computer it is compile and run on
 * Author: Ibrahim Kyuka Avong
 * Creation Date: February 16, 2023
 *
 */

#include <stdio.h>

int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return(0);
}
