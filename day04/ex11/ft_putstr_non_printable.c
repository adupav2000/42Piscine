
#include <unistd.h>
#include <stdio.h>

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
	char qwert[4];
	int i;


	qwert[0] = 92;
	i = 1;
	qwert[1] =  convert_dec_to_hex_under_16(dec / 16);
	qwert[2] = convert_dec_to_hex_under_16(dec % 16);

	return (qwert);
}

void ft_putstr_non_printable(char *str){
	int i[2];
	char *not_printable;

	i[0] = 0;

	while (str[i[0]])	
	{
		if(!is_printable(str[i[0]]))
		{
			// printf("%s", convert_dec_to_hex((int)str[i[0]]));
			not_printable = convert_dec_to_hex((int)str[i[0]]);
			i[1] = 0;
			while (not_printable[i[1]])
			{
				write(1, &not_printable[i[1]], 4);
				i[1]++;
			}

		}	
		else
		{
			write(1, &str[i[0]], 1);		
		}
		i[0]++;
	}

}

int main(void)
{
	char *str;
	str = "azer\ntyuio";
	printf("%s\n", convert_dec_to_hex(36));

	ft_putstr_non_printable(str);
	return 0;
}