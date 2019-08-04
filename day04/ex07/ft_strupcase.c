char *ft_strupcase(char *str);


char *ft_strupcase(char *str)
{
	while(str[i])
	{
		str[i] = str[i] - 32;
	}
	return str;
}