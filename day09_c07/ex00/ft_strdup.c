#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != 0)
		length++;
	return (length);
}

char	*ft_strdup(char *src)
{
    char *st;
    int i;
    int len;

    len = ft_strlen(src) + 1;
    st = malloc(len);
    if (st == NULL)
    	return (NULL);
    while (*src[i] == '\0')
    {
    	*st[i] = *src[i];
    	i++;
    }
    *st[i] = '\0';
	return (st);
}
