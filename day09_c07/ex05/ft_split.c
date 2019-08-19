/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 13:09:24 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/19 19:22:54 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_in_string(char c, char *whites)
{
	int i;

	i = 0;
	while (whites[i] != '\0')
	{
		if (whites[i] == c)
			return (1);
		++i;
	}
	return (0);
}

int		count_word(char *str, char *whites)
{
	int	word;
	int number_words;
	int i;

	word = 0;
	number_words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (!is_in_string(str[i], whites) && word == 0)
		{
			++number_words;
			word = 1;
		}
		else if (is_in_string(str[i], whites))
		{
			word = 0;
		}
		++i;
	}
	return (number_words);
}

int		calculate_length(char *str, char *whites)
{
	int i;

	i = 0;
	while (str[i] != '\0' && !is_in_string(str[i], whites))
		++i;
	return (i);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	if (i < n && src[i] == '\0')
	{
		while (dest[i] != '\0')
		{
			dest[i] = '\0';
			++i;
		}
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**array;
	int		word;
	int		i;
	int		length[2];

	array = (char **)malloc(count_word(str, charset) * sizeof(char *) + 1);
	word = 0;
	length[1] = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (!is_in_string(str[i], charset) && word == 0)
		{
			word = 1;
			length[0] = calculate_length(&str[i], charset);
			array[length[1]] = (char *)malloc((length[0]) * sizeof(char));
			array[length[1]] = ft_strncpy(array[length[1]], &str[i], length[0]);
			++length[1];
		}
		else if (is_in_string(str[i], charset))
			word = 0;
		++i;
	}
	array[length[1]] = 0;
	return (array);
}
