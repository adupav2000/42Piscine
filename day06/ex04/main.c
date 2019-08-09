#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "ft_putnbr_base.c"

int main()
{
	int nb = -2147483648;
	char str[] = "01";
	// char x[] = "Alaind\x1\x5\x10\x15";
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
	// printf("%s\n", "stable");
	// printf("%u\n", strlcpy(x, z, 5));
	// printf("%u\n", strlcpy(x, z, 5));
	// ft_putnbr_base(nb, str);
	// printf("%d\n", check_base("0123456789ABCDEF"));
	// printf("%d\n", check_base("0123QA456789ABCDEFs"));
	// printf("%d\n", check_base(""));
	// printf("%d\n", check_base("0"));
	// printf("%d\n", check_base("0123Q456789ABCDEF-"));
	// printf("%d\n", check_base("0123QA456789ABCDE-F-"));
	 ft_putnbr_base(nb, str);
	return 0;
}
