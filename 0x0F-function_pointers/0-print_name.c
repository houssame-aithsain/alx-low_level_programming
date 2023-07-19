#include "function_pointers.h"

/**
 * print_name - Prints a name using a given function pointer.
 * @name: The name to be printed.
 * @f: A function pointer that takes a character pointer and returns nothing.
 *
 * Return: None.
 *
 * Description: This function checks if the input name is not NULL, and if so,
 * it calls
 * the function pointed to by f, passing the name to it.
 * he f function will be responsible
 * for how the name is printed, allowing for different printing formats.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
