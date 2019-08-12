#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int size;

	size = max - min;
	range = NULL;
	if (size <= 0)
		return (0);
	*range = malloc(sizeof(int * size));
	
}