#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int i;

	size = max - min;
	if (size <= 0)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(size * sizeof(int));
	i = 0;
	while (min + i < max)
	{
		*range[i] = min + i;
		i++;
	}
	return (size);
}