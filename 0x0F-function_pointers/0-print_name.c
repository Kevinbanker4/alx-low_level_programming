#include "function_pointers.h"
/**
*print_name-  print a name pointer.
*@name: name to print.
*@f : function that print name
*Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
