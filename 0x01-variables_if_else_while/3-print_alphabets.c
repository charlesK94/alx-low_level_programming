#include <stdio.h>

int main(void) {
  char ch;

  /* Print lowercase alphabet */
  for (ch = 'a'; ch <= 'z'; ch++) {
    putchar(ch);
  }

  /* Print uppercase alphabet */
  for (ch = 'A'; ch <= 'Z'; ch++) {
    putchar(ch);
  }

  /* Print newline */
  putchar('\n');

  return 0;
}

