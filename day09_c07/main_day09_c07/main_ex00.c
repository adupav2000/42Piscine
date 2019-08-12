#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "../ex00/ft_strdup.c"
int main()
{
	char *x = "qwertyuio\n";
	char *x1 = ft_strdup(x);
	char *x2 = strdup(x);
	write(1, x, 12);
	write(1, x1, 12);
	write(1, x2, 12);


}