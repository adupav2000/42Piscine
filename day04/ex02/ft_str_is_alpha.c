/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 19:37:19 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/04 22:02:51 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

int  ft_str_is_alpha(char *str)
{
    int i;
    int ret = 1;
    i = 0;
    if(!ft_strlen(str))
       ret = 1; 
    while(str[i])
    {
        printf("%d , %c\n", ret, str[i]);
        if(str[i] > 122 || (str[i] < 65 && str[i] > 90) || str[i] < 97)
            ret = 0;
        i++;
    }
    return (ret);
}

int main()
{
    char *str;
    str = "zxcvbn111m";
    printf("%d\n", ft_str_is_alpha(str));
    return 0;
}
