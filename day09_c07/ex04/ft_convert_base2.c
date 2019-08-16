/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: AlainduPavillon <AlainduPavillon@student.42.fr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 01:21:33 by AlainduPavillon   #+#    #+#             */
/*   Updated: 2019/08/16 11:41:37 by AlainduPavillon  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putstr(char *str)
{
	int length;

	length = 0;
	while (str[length] != 0)
	{
		ft_putchar(str[length]);
		length++;
	}
}
int ft_strlen(char *str)
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

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		printf("%s, on char %c, on base %s\n", "stable - check - 1", base[i], base);
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (0);
		j = 0;

		while (base[j])
		{
			if (base[j] == base[i] && i != j)
				return (0);
			printf("%s at Status - %d\n", "stable = princip check", j);
			j++;
		}
		i++;
	}
	return (1);
}

char *convert_dec_to_base(long long int dec_val, char *base)
{
	char rev_ret[200];
	char true_ret_val[200];
	int i;
	int i2;
	int pos;

	i = 0;
	pos = 1;
	// rev_ret = malloc(sizeof(char *) * 90);
	// true_ret_val = malloc(sizeof(char *) * 90);
	if (dec_val < 0)
		pos = -1;
	while (dec_val > ft_strlen(base))
	{
		rev_ret[i] = (char)malloc(sizeof(char));
		rev_ret[i] = base[dec_val % ft_strlen(base)];
		dec_val = dec_val / ft_strlen(base);
		i++;
	}
	rev_ret[i] = base[dec_val % ft_strlen(base)];
	i2 = 0;
	true_ret_val = (char *)malloc(sizeof(base[dec_val % ft_strlen(base)]) + 2);
	while(i2 <= i + 1)
	{
		if (pos == -1 && i2 == 0)
		{
			true_ret_val[i2] = '-';
			i++;
			i2++;
		}
		printf("%s\n",true_ret_val);
		true_ret_val[i2] = rev_ret[i - i2];
		i2++;
	}
	true_ret_val[i2] = 0;
	return (true_ret_val);
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
