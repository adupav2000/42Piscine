/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 19:38:24 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/05 13:32:59 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void to_lower_case(char *c)
{
	*c = *c + 32;
}

int is_maj_char(char c)
{
	if (c < 91 && c > 64)
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}

char *ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if (is_maj_char(str[i]))
		{
			to_lower_case(&str[i]);
		}
		i++;
	}
	return str;
}
