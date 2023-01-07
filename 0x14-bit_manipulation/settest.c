#include "main.h"

int main(void)
{
  unsigned long int n = 12;
  set_bit(&n, 1);
  printf(" the number - %u\n", n);
  return (0);
}
