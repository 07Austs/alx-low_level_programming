#include "main.h"
<<<<<<< HEAD
=======
#include <stdio.h>
/**
 * _isupper - evalue if letter is uppercase .
 *@c: print int
 * Return: Always 0.
 */
>>>>>>> 61908c17ecee26113e529300e051bfda0de83941

/**
 * _isupper - Checks for uppercase characters.
 * @c: The character to be checked.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
