/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 00:18:37 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/18 20:08:53 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
	
int		ft_check_charset(char c, char *charset) 
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		++i;
	}
	return (0);
}

int		ft_check_word(char c, char c_b, char *charset)
{
	return (!ft_check_charset(c, charset) && ft_check_charset(c_b, charset));   
}

int		ft_count_word(char *str, char *charset)                        
{
	int	words_count;
	int	i;

	i = 0;
	words_count = 0;
	while (str[i] != '\0')									
	{	
		if (ft_check_word(str[i], str[i - 1], charset) ||     
			(!ft_check_charset(str[i], charset) && i == 0))				
			words_count++;									
		i++;
	}
	return (words_count);									
}

int		*ft_count_char(char *str, char *charset)			
{
	int	index;
	int	i;
	int	words_count;
	int	*size_stock;										

	i = 0;													
	words_count = ft_count_word(str, charset);				
	size_stock = malloc(words_count * sizeof(int));
	while (i <= words_count)								
	{																
		size_stock[i] = 0;
		i++;
	}
	i = 0;													
	index = 0;
	while (str[i] != '\0')										
	{
		if (!ft_check_charset(str[i], charset))					
			size_stock[index]++;								
		else if (i > 0 && !ft_check_charset(str[i - 1], charset))	
			index++;
		i++;													
	}
	return (size_stock);										
}

char	**ft_split(char *str, char *charset)
{
	char	**string_tab;														
	int		i;																	
	int		j;
	int		index;
	int		*size_stock;													

	string_tab = malloc((ft_count_word(str, charset) + 1) * sizeof(char*));		
	size_stock = ft_count_char(str, charset);								
	index = 0;					
	j = 0;
	i = -1;
	while (str[++i] != '\0')												
	{																		
		if (!ft_check_charset(str[i], charset))								
		{
			if (i == 0 || ft_check_word(str[i], str[i - 1], charset))		
				string_tab[index] = malloc(size_stock[index] * sizeof(char));	
			string_tab[index][j] = str[i];										
			string_tab[index][++j] = '\0';										
		}
		else if (i > 0 && !ft_check_charset(str[i - 1], charset) && ++index) 
			j = 0;
	}
	string_tab[ft_count_word(str, charset)] = 0;									
	return (string_tab);															
}

int main (int argc, char **argv)
{
	int i;
	i = 0;
	char **tab;
	tab = ft_split(argv[1],argv[2]);
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
}