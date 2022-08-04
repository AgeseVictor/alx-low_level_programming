#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *  *print_name - prints a name
 *   * @name: name to be printed
 *    * @m: pointer to function
 *     * Return: name
 */

void print_name(char *name, void (*m)(char *))
{
	if (!name || !m)
		return;
	m(name);
}
