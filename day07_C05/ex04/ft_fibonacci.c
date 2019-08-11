<<<<<<< HEAD


int ft_fibonacci(int index)
{
    int i;
    int i1;
    int i2;
    int res;

    if(index == 0)
        return (0);
    if(index == 1)
        return (1);
    i = 2;
    res = 0;
    i1 = 0;
    i2 = 1;
    while(i == index)
    {
        res = i1 + i2;
        i1 = i2;
        i2 = res;
        i++;
    }
    return res;
}

=======
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 11:50:24 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/09 15:09:29 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
	int i; 
	int i2;
	int i3;
	int res;


	res = 0;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	i = 2;
	i2 = 0;
	i3 = 1;
	while (i <= index)
	{
		res = i2 + i3;
		i2 = i3;
		i3 = res;
		i++;
	}
	return (res);
}
>>>>>>> dacaadd73fe964216975c15eb96d7f93fd8e9833
