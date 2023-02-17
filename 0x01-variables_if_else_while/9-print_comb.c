#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    /* loop through ASCII codes for digits 0 to 9 */
    for (n = 48; n < 58; n++)
    {
        /* print the digit */
        putchar(n);

        /* if it's not the last digit, print a comma and a space */
        if (n != 57)
        {
            putchar(',');
            putchar(' ');
        }
    }

    /* print a newline character at the end */
    putchar('\n');

    return (0);
}

