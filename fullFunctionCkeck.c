/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullFunctionCkeck.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 15:22:22 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/06 19:21:24 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

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
		printf("\n[prime while str = %c]", str[i[0]]);
		if (str[i[0]] == to_find[0])
		{
			check = 1;
			i[1] = 0;
			i[2] = i[0];
			while (to_find[i[1]] && check)
			{
				printf("\n[str = %c] [str i[2] = %c]", str[i[0]], str[i[2]]);
				printf("[i = %d]", i);
				printf("[i[1] = %d]", i[1]);
				printf("[i[2] = %d]", i[2]);
				printf("[check = %d]", check);
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

int main()//ft_strstr.c
{
	char i[23] = "qweqwertyuio";		
	char i2[13] = "qwertyuio";
	printf("\n%s\n", ft_strstr(i, i2));
	printf("%s\n", strstr(i, i2));
	return 0;
}




/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 17:26:59 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/06 19:21:00 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
int			ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != 0)
	{
		length++;
	}
	return (length);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i_max = size - ft_strlen(dest);
	int i = 0;
	int ret = ft_strlen(dest) + ft_strlen(src) - 1;
	while (src[i] && i < i_max)
	{
		dest[ft_strlen(dest) + 1] =  src[i];
		i++;
	}
	return (ret);
}



int main()
{
	char *dest = "wr'";
	char *src = "dfghjhhmg,cjltx.cjgc.jcg";
	printf("%u\n", ft_strlcat(dest, src, 6));
 	// printf("%s\n", dest);
	printf("%lu\n", strlcat(dest, src, 6));
	// printf("%s\n", dest);
	return 0;
}
