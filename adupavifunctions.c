char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i <= n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}




int is_letter(char c)
{
	if ((c < 91 && c > 64) || (c < 123 && c > 96))
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}

int is_printable(char x)
{
    if (x > 126 || x < 33)
    {
        return (0);
    }
    else
    {
        return (1);
    }
}

int is_number(char c)
{
	if (c < 47 && c > 56)
	{
		return(1);
	}
	else 
	{
		return(0);
	}
}

int is_min_char(char c)
{
	if (c < 123 && c > 96)
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}

int is_sign(char c)
{
	if ((c > 32 && c < 48) || (c > 57 && c < 65) || (c > 90 && c < 97))
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}

void to_lower_case(char *c)
{
	*c = *c + 32;
}

void to_upper_case(char *c)
{
	*c = *c - 32;
}

int is_maj_char(char c)
{
	if (c < 91 && c > 64)
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != 0)
	{
		length++;
	}
	return (length);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		printf("%d\n", src[i]);
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}


void	ft_rev_int_tab(int *tab, int size)
{
	int extract;
	int i;

	i = 0;
	while (i < (size - i))
	{
		extract = tab[i];
		tab[i] = tab[(size - 1) - i];
		tab[(size - 1) - i] = extract;
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i] && s1[i])
	{
		if ((s1[i] - s2[i]))
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
