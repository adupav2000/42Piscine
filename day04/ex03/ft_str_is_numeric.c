/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 19:37:28 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/04 19:37:30 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_strlen(char *str)
{
    int length;

    length = 0;
    while(str[length] != 0)
    {
        length++;
    }
    return (length);
}    

int  ft_str_is_numeric(char *str)
{
    int i;
    int ret = 0;
    i = 1;
    if(!ft_strlen(str))
       ret = 1; 
    while(str[i] != 0)
    {
        if(str[i] < 57 && str[i] > 48)
            ret = 0;
        i++;
    }
    return (ret);
}
