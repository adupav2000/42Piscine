/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 15:22:22 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/06 17:08:53 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strstr(char *str, char *to_find)
{
	int i[3];
	int check;

	i[0] = 0;
	if (!to_find[i[0]])
		return (str);
	while (str[i[0]])
	{
		if (str[i[0]] == to_find[0])
		{
			check = 1;
			i[1] = 0;
			i[2] = i[0];
			while (to_find[i[1]] && check)
			{
				check = char_cmp(to_find[i[1]], str[i[2]]);
				i[2]++;
				i[1]++;
			}
			if (check == 1)
				return (&str[i[2] - i[1]]);
		}
		i[0]++;
	}
	return (0);
}
