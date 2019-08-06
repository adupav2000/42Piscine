#include <stdio.h>


int		char_cmp(char char_1, char char_2)
{
	if (char_1 == char_2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
int fois_x_puissance(int nb, int x, int puissance)
{
	int i;

	i = -1;
	while(++i < puissance)
	{
		nb = nb * 10;
	}
	 return nb;
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

int convert_base_to_dec(char *base, char *num_in_base)
{
	int ret;
	int i;
	int i2;

	i = - 1;
	ret = 1;
	while (num_in_base[++i])
	{
		i2 = -1;
		while(base[++i2] != num_in_base[i])
		{
			printf("[ base = %c] ", base[i2]);			
			printf("[ num_in_base = %c]", num_in_base[i]);			
			printf("[ i2 = %d]\n", i2);			
		}
		ret +=  (i2 + 1);
	}
	return ret;
}

char convert_dec_to_hex_under_16(int ref)
{
	char ret;

	if (ref < 10)
	{
		ret = ref + 48;
		return (ret);
	}
	else 
	{
		ret = ref + 65;
		return (ret);
	}
	return (0);
}

char *convert_dec_to_hex(int dec)
{
	int first;
	int last; 
	char ret[4];
	int i;

	ret[0] = 92;
	i = 1;
	ret[1] =  convert_dec_to_hex_under_16(dec / 16);
	ret[2] = convert_dec_to_hex_under_16(dec % 16);
	return (ret);
}

int main(void)
{
	char *base = "qwertyuiop";
	char *num_in_base = "ret";

	int result = convert_base_to_dec(base, num_in_base);
	printf("%d\n", result);
	printf("%d\n", ft_strlen(num_in_base));
	
}