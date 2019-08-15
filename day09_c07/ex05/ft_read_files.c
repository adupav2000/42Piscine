/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_files.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 01:53:27 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/15 01:53:32 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fctnl.h>

int main(int argc, char const *argv[])
{
	int file_desc;
	char buffer[50000];

	if (argc < 2 | argc > 2 | (file_desc = open(argv[1], RD_ONLY)) < 0)
	{
		if (argc < 2)
			write(1, &"File name missing.", 30);
		else if (argc > 2)
			write(1, &"Too many arguments.", 30);
		else if ((file_desc = open(argv[1], RD_ONLY)) < 0)
			write(1, &"Cannot read file.", 30);
		return (0);
	}
	read(file_desc, buffer, 50000);
	write(1, &buffer, 50000);
	if(close(file_desc) < 0)
		return (-1);
	return (0);
}
