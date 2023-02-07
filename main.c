#include <stdio.h>
void print_string(char *str);
int main(void)
{
	print_string("hello world");
	return (0);
}


void print_string (char *str)
{
  if (str)
    printf ("%s \n", str);
  else
    printf ("Empty Argument Provided \n");
}
