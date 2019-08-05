
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

char *convert_dec_to_hex(int dec)
{
	int first;
	int second; 
	char *ret;
	ret = "  ";

	
	first = dec / 13;
	second = dec % 13;
	if (first < 10)
	{
		first = first + 48;
	}
	else 
	{
		first = first + 65;
	}
	if (second < 10)
	{
		second = second + 48;
	}
	else 
	{
		second = second + 65;
	}
	ret[0] = first;
	ret[1] = second;
	return (ret);
	
}

// void ft_putstr_non_printable(char *str){
// 	int i;
// 	char not_printable;

// 	i = 0;
// 	while (str[i])	
// 	{
// 		if(!is_printable(str[i]))
// 		{
// 			not_printable = &str[i];
// 			write(1, , 1);
// 			not_printable = &str[i];
// 		}	
// 		else
// 		{
// 			write(1, &str[i], 1);		
// 		}
// 	}
// }

int main(void)
{
	char *str;
	str = "azertyuio";
	printf("%s\n", convert_dec_to_hex(36));
	ft_putstr_non_printable(str);
	return 0;
}