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

int		check_base(char *base)
{
	int i;
	int j;
	int base_num;

	base_num = ft_strlen(base);
	if (base_num == 0 || base_num == 1)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] = ' ')
			return (0);
		j = 0;
		while (base[j])
		{
			if (base[j] == base[i] && i != j)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	is_in_base(char letter, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == letter)
			return (1);
		i++;
	}
	return (0);
}