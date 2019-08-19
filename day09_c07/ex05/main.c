#include <stdio.h>
#include "ft_split2.c"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int length;

	length = 0;
	while (str[length] != 0)
	{
		ft_putchar(str[length]);
		length++;
	}
}

int main(int argc, char **argv)
{
	(void)argc;
	char **s;

	s = ft_split(argv[1], argv[2]);
	int e = 0;
	while (s[e])
	{
		printf(" 0 = = %s\n", s[e]);
		e++;
	}
	
	// printf("%s\n", replace_charset(i, separator));
	return 0;
}
