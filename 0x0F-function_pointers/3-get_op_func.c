#include "3-calc.h"
#include <stdlib.h>

/**
 * * get_op_func - select the correct operation function asked by user
 * * @m: operator argument
 * * Return: function pointer pointing to operator given
 */
int (*get_op_func(char *m))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int n = 0;

	while (ops[n].op != NULL && *(ops[n].op) != *m)
		n++;
	return (ops[n].f);
}
