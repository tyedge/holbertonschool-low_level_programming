#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

/* 0x0F-variadic_functions Prototypes and Definitions */
int _putchar(int c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


/**
 * struct printer - Short description
 * @fmt: pointer to format
 * @str: pointer to variable functions
 *
 * Description: new, user defined data type
 */
struct format
{
	char fmt;
	void (*str)();
};



/**
 * typedef fmat - Typedef for struct format
 */

typedef struct format fmat;

#endif /* _VARIADIC_FUNCTIONS_H_ */
