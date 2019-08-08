int main()//ft_strncat.c
{
	char i[23] = "qwertyuiop[";		
	char i2[13] = "qwertyuiop[";		
	printf("%s\n", ft_strncat(i, i2, 4));
	return 0;
}

int main()//ft_strstr.c
{
	char i[23] = "qwertyuiop[";
	char i2[13] = "tyu";		
	printf("%c\n", *ft_strstr(i, i2));
	printf("%c\n", *strstr(i, i2));
	return 0;
}