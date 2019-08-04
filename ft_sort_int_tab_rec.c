void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int i_2;
	int extract;

	i = 0;
	while (i < size)
	{
		if (str[i + 1] != '\0' && str[i] > str[i + 1])
		{
			extract = str[i];
			str[i] = str[i + 1];
			str[i + 1] = extract;
			ft_sort_int_tab(tab, size);
		}
		i++;
	}
}