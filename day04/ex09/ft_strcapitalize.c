/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 15:51:31 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/05 16:57:49 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_printable(char x)
{
	if (x > 126 || x < 33)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

int	is_sign(char c)
{
	if ((c > 32 && c < 48) || (c > 57 && c < 65) || (c > 90 && c < 97))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

void	to_lower_case(char *c)
{
	*c = *c + 32;
}

void	to_upper_case(char *c)
{
	*c = *c - 32;
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] < 91 && str[i] > 64)
			to_lower_case(&str[i]);
		if (i != 0)
		{
			if ((!is_printable(str[i - 1])
				|| is_sign(str[i - 1]))
				&& !(str[i - 1] < 47 && str[i - 1] > 56))
			{
				if (str[i] < 123 && str[i] > 96)
					to_upper_case(&str[i]);
			}
		}
		else
		{
			to_upper_case(&str[i]);
		}
	}
	return (str);
}
