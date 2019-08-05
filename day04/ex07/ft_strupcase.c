/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 19:38:09 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/05 13:28:27 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void to_upper_case(char *c)
{
	*c = *c - 32;
}

int is_min_char(char c)
{
	if (c < 123 && c > 96)
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}

char *ft_strupcase(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if (is_min_char(str[i]))
		{
			to_upper_case(&str[i]);
		}
		i++;
	}
	return str;
}

int main()
{
	char str[] = "azertyuiofff U 4567890p";
	printf("%s\n", ft_strupcase(str));
	return 0;
}