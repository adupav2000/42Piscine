/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 19:37:46 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/04 19:37:48 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_str_is_uppercase(char *str);


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

int ft_str_is_uppercase(char *str)
{
	int i;
    int ret = 1;
    i = 1;
    if(!ft_strlen(str))
       ret = 1; 
    while(str[i] != 0)
    {
        if(str[i] < 65 && str[i] > 90)
            ret = 0;
        i++;
    }
    return (ret);
}

int main()
{
        
    return 0;
}