#include "main.h"

void print_alphabet_x10(void)
{
  int x;
  char lower;
  for(x = 0; x <= 10; x++)
  {
    for (lower='a'; lower <= 'z'; lower++)
      {
	_putchar(lower);
      }
    _putchar('\n');
  }
}
