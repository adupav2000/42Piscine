#include <stdio.h>
#include "ft_strs_to_tab.c"

int main(int argc, char const *argv[])
{
	struct s_stock_str *r;
	r = ft_strs_to_tab(argc, (char **)argv);
	printf("%d\n", r[1].size);
	printf("%s\n", r[1].str);
	printf("%s\n", r[1].copy);

	return 0;
}