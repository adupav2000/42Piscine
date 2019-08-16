#include <stdio.h>

#include <unistd.h>

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void	ft_putstr(char *str)
// {
// 	int length;

// 	length = 0;
// 	while (str[length] != 0)
// 	{
// 		ft_putchar(str[length]);
// 		length++;
// 	}
// }
#include "ft_convert_base.c"
int main(int argc, char const *argv[])
{
	// printf("'%s'\n", ft_convert_base("100000", "01", "0123456789"));
	(void)argc;
	(void)argv;
	printf("%s\n", ft_convert_base("100000", "01", "0123456789"));
	return 0;
}

