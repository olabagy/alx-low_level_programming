#include <stdio.h>
int main (void)
{
  int i
    long int i2;
  long long int i3;
  vhar c;
  float f;
  printf("Size of a char:%lu bytes(s)\n", (unsigned long)sizeof(c));
  printf("Size of an int: %lu byte(s)\n",(unsigned long)sizeof(i));
  printf("Size of a long int:%lu byte(s)\n", (unsigned long)sizeof(i2));
  printf("Size of a long long int: lu bytes(s)\n",(unsigned long)sizeof(i3));
  printf("Size of a float:%lu byte(s)\n", (usigned long)sizeof(f));
  return (0);
}
