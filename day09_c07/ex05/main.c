#include <stdio.h>
#include "ft_split.c"

int main()
{
	char *i = "asdsd.fs/df;df//sdfsdf;sdfsdfsf";
	char *separator = ";./";
	printf("%d\n", return_charset_pos(0, i, separator));
	printf("%s\n", return_split_string_part(0, 8, i));
	printf("%s\n", ft_split(i, separator)[1]);
	return 0;
}