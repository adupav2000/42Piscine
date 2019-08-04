char *ft_strlowcase(char *str);


char *ft_strlowcase(char *str)
{
	while(str[i])
	{
		str[i] = str[i] + 32;
	}
	return str;
}