
#include <unistd.h>
#include <stdio.h>
void ft_putstr_non_printable(char *str);

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
		ret = ref + 65;
		return (ret);
	}
	return (0);
}

char *convert_dec_to_hex(int dec)
{
	int first;
	int last; 
	char ret[4];
	int i;

	ret[0] = 92;
	i = 1;


	last = convert_dec_to_hex_under_16(dec % 16);
	first = convert_dec_to_hex_under_16(dec / 16);
	return (ret);
}

void ft_putstr_non_printable(char *str){
	int i;
	char *not_printable;

	i = 0;
	while (str[i])	
	{
		if(!is_printable(str[i]))
		{
			char *convert_dec_to_hex(&str[i]);
			write(1, , 4);
			
		}	
		else
		{
			write(1, &str[i], 1);		
		}
	}
}

int main(void)
{
	char *str;
	str = "azertyuio";
	printf("%s\n", convert_dec_to_hex(36));
	ft_putstr_non_printable(str);
	return 0;
}