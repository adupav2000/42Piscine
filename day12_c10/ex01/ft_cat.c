/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 22:55:10 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/20 00:52:41 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

void	ft_putstr(char *str)
{
	int length;

	length = 0;
	while (str[length] != 0)
		write(1, &str[length++], 1);
}

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != 0)
		length++;
	return (length);
}

void error_message_display(int err_num, char *standart_output)
{
	ft_putstr("ft_cat: ");
	if (standart_output[0])
	{
		ft_putstr(standart_output);	
		ft_putstr(": ");
	}
	ft_putstr(strerror(err_num));
	ft_putstr("\n");
}

int read_output()
{
	char buffer[30001];
	read(1, buffer, 30001);
	if (ft_strlen(buffer) == 30001)
	{
		errno = 12;
		error_message_display(errno, "");
		return (-1);
	}
	ft_putstr(buffer);
	return (0);
}

int read_file(char *link)
{
	int dec_num;
	char buffer;

	buffer = (char *)malloc(sizeof(char)*30000);
	dec_num = open(link , O_RDONLY);
	if (dec_num < 0)
	{
		errno = 2;
		error_message_display(errno, link);
		return (-1);
	}
	if (read(dec_num, buffer, 30000) < 0)
		return (-1);
	ft_putstr(buffer);
	if (close(dec_num) < 0)
	{
		return (-1);
	}
	return (0);
}

int main(int argc, char const *argv[])
{

	if (argc < 2)
	{
		return(read_output());
	}
	else 
	{
		return (read_file(*argv[1]));
	}
	return (0);
}