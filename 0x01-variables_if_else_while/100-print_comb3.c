#include <stdio.h>

/**
 * main - prints all possible combinations of two digits
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
        int i, j;

        for (i = 48; i <= 56; i++)
	       	/* Iterate over first digit */
        {
                for (j = i + 1; j <= 57; j++)
		  	/* Iterate over second digit */
                {
                        /* Print first and second digits */
                        putchar(i);
                        putchar(j);

                        /* Print comma and space, except for last pair */
                        if (i != 56 || j != 57)
                        {
                                putchar(',');
                                putchar(' ');
                        }
                }
        }

        putchar('\n');
       	/* Print newline */

        return (0);
}

