/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_files.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 01:53:27 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/15 02:08:17 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != 0)
		length++;
	return (length);
}

int main(int argc, char const *argv[])
{
	int file_desc;
	char buffer[50000];

	if (argc < 2 | argc > 2 | (file_desc = open(argv[1], O_RDONLY)) < 0)
	{
		if (argc < 2)
			write(1, &"File name missing.\n", 20);
		else if (argc > 2)
			write(1, &"Too many arguments.\n", 21);
		else if ((file_desc = open(argv[1], O_RDONLY)) < 0)
			write(1, &"Cannot read file.\n", 19);
		return (0);
	}
	read(file_desc, buffer, 50000);

	write(1, &buffer, ft_strlen(buffer) + 1);
	if(close(file_desc) < 0)
		return (-1);
	return (0);
}
