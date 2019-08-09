#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "ft_strcmp.c"


int strcmp2(const char *p1, const char *p2)
{
  const unsigned char *s1 = (const unsigned char *) p1;
  const unsigned char *s2 = (const unsigned char *) p2;
  unsigned char c1, c2;
  do
    {
      c1 = (unsigned char) *s1++;
      c2 = (unsigned char) *s2++;
      if (c1 == '\0')
        return c1 - c2;
    }
  while (c1 == c2);
  return c1 - c2;
}

int main()
{
	// char x[] = "Alaind\x1\x5\x10\x15";
	char x1[] = "qwrtyuijk.hvb;";
	char x2[] = "qwrtyuijk.hv";
	// char myCharValues[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,34,35,36,37,38,39,40,41,42,43,44,127};
	// int myIntValues[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,34,35,36,37,38,39,40,41,42,43,44,127};
	// char z[] = "hiMarteu\nrdeoir";
	// ft_putstr_non_printable(x);
	// ft_putstr_non_printable(myValues);
	// printf("%u\n", ft_putstr_non_printable(x));
	// printf("%s\n", x);
	// printf("%s\n", z);
	// printf("%lu\n", strlcpy(x, z, 5));
	// printf("%s\n", x);
	// printf("%s\n", z);
	printf("%d\n", ft_strcmp(x1, x2));
	printf("%s\n", x1);
	printf("%s\n", x2);
	printf("%d\n", strcmp(x1, x2));
	printf("%s\n", x1);
	printf("%s\n", x2);
	printf("%d\n", strcmp2(x1, x2));
	printf("%s\n", x1);
	printf("%s\n", x2);

}