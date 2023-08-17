#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *ptr, *spr = "";
	va_list list;

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", spr, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", spr, va_arg(list, int));
					break;

				case 'f':
					printf("%s%f", spr, va_arg(list, double));
					break;

				case 's':
					ptr = va_arg(list, char *);
					if (!ptr)
						ptr = "(nil)";
					printf("%s%s", spr, ptr);
					break;

				default:
					i++;
					continue;
			}
			i++;
			spr = (", ");
		}
	}
		printf("\n");
		va_end(list);
}
