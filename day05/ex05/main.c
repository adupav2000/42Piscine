#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "ft_strlcat.c"
int main()
{
	char x[] = "Alaind2131321";
	// char myCharValues[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,34,35,36,37,38,39,40,41,42,43,44,127};
	// int myIntValues[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,34,35,36,37,38,39,40,41,42,43,44,127};
	char z[] = "hiMarteurdeoir";
	// ft_putstr_non_printable(x);
	// ft_putstr_non_printable(myValues);
	// printf("%u\n", ft_putstr_non_printable(x));
	// printf("%s\n", x);
	// printf("%s\n", z);
	// printf("%lu\n", strlcpy(x, z, 5));
	// printf("%s\n", x);
	// printf("%s\n", z);
	printf("%u\n", ft_strlcat(x, z, 9));
	printf("%s\n", x);
	printf("%s\n", z);

	printf("%lu\n", strlcat(x, z, 9));
	printf("%s\n", x);
	printf("%s\n", z);

}