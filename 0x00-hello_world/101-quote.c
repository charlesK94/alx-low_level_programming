#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry_point
 * void: When value  X is void, it means it is not accept any arg
(* Description - Prints out the last part of a quote in the standard error.)
 *
(* unistd header: has the  function write)*
 * Return: 1 only is  success.
 */
int main(void)
{
	write(2,
"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
