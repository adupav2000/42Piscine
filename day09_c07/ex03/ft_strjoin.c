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

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		i2;
	char	*ret;

	ret = dest;
	i2 = -1;
	i = ft_strlen(ret);
	while (src[++i2])
	{
		ret[i] = src[i2];
		i++;
	}
	i--;
	while (ret[++i])
	{
		ret[i] = '\0';
	}
	return (ret);
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
		printf("ss1\n");
		while (i[1] < ft_strlen(strs[i[0]]))
		{
			printf("--ss2 +++ %c\n", strs[i[0]][i[1]]);
			ret_val[i[2]++] = strs[i[0]][i[1]];
			i[1]++;
		}
		printf("ss3-\n");

		ret_val[i[2]++] = *sep;
		i[0]++;

	}
	return (ret_val);
}