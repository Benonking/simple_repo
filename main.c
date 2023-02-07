#include <stdio.h>

void
print_string (char *str)
{
  if (str)
    printf ("%s \n", str);
  else
    printf ("Empty Argument Provided \n");
}
