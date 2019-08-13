#include <stdio.h>
#include "../ex02/ft_ultimate_range.c"

int main()
{
	int *range; 
	int x;
	x = ft_ultimate_range(&range, 2, 3);
	printf("%d\n", x);
	printf("%d\n", range[0]);
}