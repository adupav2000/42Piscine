#include <stdio.h>
#include <unistd.h>


unsigned int ft_strlcpy(char *dest, char *src, unsigned intsize);

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


char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
    while (i <= n)
    {
    	dest[i] = src[i];
    	i++;
    }
    dest[i] = src[i];
    return (dest);
}

void	ft_putnbr1(int nb)
{
	int		divider;
	int		extract;
	int		check;
	char	dec_val;

	check = 0;
	divider = 1000000000;
	while (divider >= 1)
	{
		extract = nb / divider;
		nb = nb - extract * divider;
		if (extract > 0 || check == 1)
		{
			check = 1;
			dec_val = extract + 48;
			write(1, &dec_val, 1);
		}
		divider = divider / 10;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, &"-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			write(1, &"-", 1);
			nb = nb * -1;
		}
		ft_putnbr1(nb);
	}
}

int main(void)
{
	char *dest;
	char *src;

	dest = "";
	src = "'jhgvkkvgkgv";

	ft_putnbr(ft_strlcpy(dest, src, 3));
	return 0;
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	ft_strncpy(dest, src, size);
	return (ft_strlen(src));
}