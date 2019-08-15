#include <stdio.h>
#include "ft_convert_base.c"
int main(int argc, char const *argv[])
{
	// printf("'%s'\n", ft_convert_base("100000", "01", "0123456789"));
	(void)argc;
	(void)argv;
	ft_convert_base("100000", "01", "0123456789");
	return 0;
}

