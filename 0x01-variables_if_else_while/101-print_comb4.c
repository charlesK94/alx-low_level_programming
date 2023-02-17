#include <stdio.h>

/**
 * main - Prints all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
        int n, m, p;

        for (n = 48; n < 58; n++)
        {
                for (m = n + 1; m < 58; m++)
                {
                        for (p = m + 1; p < 58; p++)
                        {
                                putchar(n);
                                putchar(m);
                                putchar(p);

                                if (n == 55 && m == 56 && p == 57)
                                {
                                        break;
                                }

                                putchar(',');
                                putchar(' ');
                        }
                }
        }

        putchar('\n');

        return (0);
}

