#include <stdio.h>

int puissance(int nb, int mult, int fois)
{
	int i;

	i = 1;
	while (i++ < fois)
		nb = nb * mult;
	return nb;
}

int	ft_atoi(char *str)
{
	int pos;
	int i;
	int result;

	pos = 1;
	result = 0;
	i = 0;
	printf("%c\n", str[i]);
	while (str[i++] == ('\t' | '\n' | '\v' | '\f' | '\r' | ' '))	
	while (str[i++] == ('-' | '+'))
	{
		if (str[i] == '-')
			pos *= -1;
	}
	while (str[i] > 47 && str[i] < 58 )
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	return (result * pos);
}

int main()
{
		
	return 0;
}