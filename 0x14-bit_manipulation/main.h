#ifndef _PUTCHAR
#define _PUTCHAR
int _putchar(char c);
#endif /* _PUTCHAR */

#ifndef BINARY_TO_UINT
#define BINARY_TO_UINT
unsigned int binary_to_uint(const char *b);
#endif /* BINARY_TO_UINT */

#ifndef PRINT_BINARY
#define PRINT_BINARY
void print_binary(unsigned long int n);
#endif /* PRINT_BINARY */

#ifndef GET_BIT
#define GET_BIT
int get_bit(unsigned long int n, unsigned int index);
#endif /* GET_BIT */

#ifndef SET_BIT
#define SET_BIT
int set_bit(unsigned long int *n, unsigned int index);
#endif /* SET_BIT */
