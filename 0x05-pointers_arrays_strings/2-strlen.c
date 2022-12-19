#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: char to check
 * Return: 0
 */

nt _strlen(char *s)
{
	int a = 0; /* start the counter from 0 */

	for (; *s++;)
		a++;
	return (a);
}
