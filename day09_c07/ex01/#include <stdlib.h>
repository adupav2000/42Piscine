#include <stdlib.h>

int	*ft_range(int min,int max)
{
	int *list;
	int size;
	int i;

    list = 0;
	size = max - min;
	if (size <= 0)
		return (list);
	list = malloc(size * sizeof(*list));
	i = 0;
	while (min + i < max)
	{
		list[i] = min + i;
		i++;
	}
	return (list);
}