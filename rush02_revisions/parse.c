/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 09:33:01 by lothieve          #+#    #+#             */
/*   Updated: 2019/08/18 17:20:22 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

const int	g_buff_chunk = 10;

char
	*get_nb(char **str)
{
	int		out;
	int		i;

	out = 0;
	i = 0;
	while ((*str)[i] >= '0' && (*str)[i] <= '9')
		i++;
	return (ft_strnedup(str, i));
}

char
	*get_str(char **str)
{
	int		i;

	while (**str == ' ')
		(*str)++;
	i = 0;
	while ((*str)[i] && (*str)[i] != '\n')
		i++;
	return (ft_strnedup(str, i));
}

char
	*extend(char *buff, int size)
{
	char		*out;
	static int	total_size = g_buff_chunk;

	out = malloc(sizeof(char) * (total_size + 1));
	out = ft_strncpy(out, buff, total_size);
	total_size += size;
	free(buff);
	return (out);
}

char
	*get_file(int fd)
{
	char	*out;
	char	*buff;
	int		read_bytes;

	if (!((out = extend(malloc(sizeof(char)), g_buff_chunk))
				&& (buff = malloc(sizeof(char) * (g_buff_chunk + 1)))))
		return (NULL);
	read_bytes = read(fd, buff, g_buff_chunk);
	while (read_bytes == g_buff_chunk)
	{
		out = ft_strcat(out, buff);
		read_bytes = read(fd, buff, g_buff_chunk);
		if(!(out = extend(out, read_bytes)))
			return (NULL);
	}
	free(buff);
	return (out);
}

t_list
	*parse(char *path)
{
	char	*file;
	int		fd;
	t_list	*head;
	t_list	*elem;
	char	*fref;

	fd = open(path, O_RDONLY);
	file = get_file(fd);
	fref = file;
	head = create_elem(get_nb(&file), get_str(&file));
	elem = head;
	while (*file)
	{
		elem->next = create_elem(get_nb(&file), get_str(&file));
		elem = elem->next;
	}
	free(fref);
	if(!check_file(fref))
    	return NULL;
	elem->next = NULL;
	return (head);
}
