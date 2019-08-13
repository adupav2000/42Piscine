#include <stdlib.h>
typedef struct s_stock_str
{
	int size;
	char *str;
	char *copy;
} t_stock_str;

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != 0)
		length++;
	return (length);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int i;
	struct s_stock_str *tab;

	i = 1;
	while (i < ac)
	{
		tab[i].size  = ft_strlen(av[i]);

		tab[i].str = malloc(sizeof(char) * ft_strlen(av[i]) + 1);
		tab[i].str = av[i];
		tab[i].copy = malloc(sizeof(char) * ft_strlen(av[i]) + 1);
		tab[i].copy = av[i];
		i++;
	}
	return (tab);
}