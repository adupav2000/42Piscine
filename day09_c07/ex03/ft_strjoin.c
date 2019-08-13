#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != 0)
	{
		length++;
	}
	return (length);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int i[3];
	int size_malloc;
	char *ret_val;

	ret_val = NULL;
	if (size == 0)
	{
		return (ret_val);
	}
	i[0] = 0;
	size_malloc = 0;
	while(i[0] <= size)
	{
		size_malloc += ft_strlen(strs[i[0]]);
		i[0]++;
	}
	ret_val = malloc(size_malloc * (sizeof(char) + 1) + 1);
	i[0] = 0;// goes trought all the cases of *strs
	i[2] = 0;// used to keep the position in the stringn to be returned
	while(i[0] <= size)
	{
		i[1] = 0;
		while (i[1] < ft_strlen(strs[i[0]]))
		{
			ret_val[i[2]++] = strs[i[0]][i[1]];
			i[1]++;
		}
		i[0]++;
		if (i[0] <= size)
			ret_val[i[2]++] = *sep;	
	}
	return (ret_val);
}