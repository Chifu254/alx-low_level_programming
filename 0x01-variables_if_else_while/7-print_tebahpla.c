#include <stdio.h>
/*
 * main -  prints the lowercase alphabet in reverse
 * prints the lowercase alphabet in reverse
 * Return: Always 0
 */

iint main(void)
{
	char le;

	for (le = 'z'; le >= 'a'; le--)
		putchar(le);

	putchar('\n');

	return (0);
}
