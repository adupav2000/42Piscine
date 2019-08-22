/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tail.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 16:21:28 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/22 16:50:44 by adu-pavi         ###   ########.fr       */
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
	ft_putstr("ft_tail: ");
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
	int i;

	i = 0;
	while (i < 1)
	{
		read(1, buffer, 30001);
		if (ft_strlen(buffer) == 30001)
		{
			errno = 12;
			error_message_display(errno, "");
			return (-1);
		}
		ft_putstr(buffer);
		buffer[1] = '\0';
	}
	
	return (0);
}

void read_file(char *link, int option_c)
{
	int dec_num;
	char buffer[30000];

	dec_num = open(link , O_RDONLY);
	if (dec_num < 0)
	{
		errno = 2;
		error_message_display(errno, link);
	}
	read(dec_num, buffer, 30000);
	if (option_c != -4)
		ft_putstr(&buffer[option_c]);	
	else
		ft_putstr(buffer);
	close(dec_num);
}
