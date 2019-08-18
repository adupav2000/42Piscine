#include <stdio.h>
#include "ft_split.c"
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

int main()
{
	char *i = "asdsd.fs/df;df//sdfsdf;-;;5";
	char *separator = ";./";
	// int x;
	char *s;
	char **t;
	// printf("%d\n",x = return_charset_pos(1, i, separator));
	// printf("STade\n");
	printf("%s\n", return_split_string_part(0, 4, i));
	printf("%d\n", return_charset_pos(0, i, separator));
	t = ft_split(i, separator);
	printf(" 0 = = %s\n", ft_split(i, separator)[0]);
	printf(" 1 = = %s\n", ft_split(i, separator)[1]);
	printf(" 2 = = %s\n", ft_split(i, separator)[2]);
	printf(" 3 = = %s\n", ft_split(i, separator)[3]);
	// printf("%s\n", replace_charset(i, separator));
	return 0;
}
