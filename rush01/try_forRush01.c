#include <stdio.h>

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

int main(int argc, char const *argv[])
{
	int size_table = ft_strlen(argv[1]);
	int table[size_table][size_table];
	int i = 0;
	
	while ()
	{

	}
	return 0;
}