#include <stdio.h>
#include "../ex04/ft_strs_to_tab.c"
#include "ft_show_tab.c"



int main(int argc, char const *argv[])
{
	struct s_stock_str *r;
	r = ft_strs_to_tab(argc, (char **)argv);
	ft_show_tab(r);
	return 0;
}
