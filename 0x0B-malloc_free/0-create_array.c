#include "main.h"
#include <stdlib.h>
/**
 * create_array - Main Entry
 * @size: input
 * @c: input
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
		char *arr;
		unsigned int i;

		if (size == 0)
		{
			return (NULL);
		}
