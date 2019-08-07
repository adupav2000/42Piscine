#include <unistd.h>

int is_printable(char x)
{
    if (x > 126 || x < 32)
    {
        return (0);
    }
    else
    {
        return (1);
    }
}

char convert_dec_to_hex_under_16(int ref)
{
	char ret;

	if (ref < 10)
	{
		ret = ref + 48;
		return (ret);
	}
	else 
	{
		ret = ref + 87;
		return (ret);
	}
	return (0);
}

void ft_putstr_non_printable(char *str){
	int i;
	char not_printable;

	i = 0;
	while (str[i])	
	{
		if(!is_printable(str[i]))
		{ 
			not_printable = 92;
			write(1, &not_printable, 1);
			not_printable = convert_dec_to_hex_under_16(str[i] / 16);
			write(1, &not_printable, 1);
			not_printable = convert_dec_to_hex_under_16(str[i] % 16);
			write(1, &not_printable, 1);
			write(1, 0, 1);
		}	
		else
		{
			write(1, &str[i], 1);		
		}
		i++;
	}
}
