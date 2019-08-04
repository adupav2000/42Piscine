#include <stdio.h>


char *ft_strcapitalize(char *str);


int main(void)
{
	char *str1;
	char *str;
	str1 = "je Mappelle alain mais ou sont les majuscules";
	str = ft_strcapitalize(str1);
	int i = 1;
	while(str1[i])
	{
		printf("%c", str1[i]);
		i++;
	}
}


char *ft_strcapitalize(char *str)
{
	int i;

	i = 1;
	while(str[i + 1])
	{
		if(str[i] == ' ' && str[i + 1] <= 122 && str[i + 1] >= 97)
		{
			str[i + 1] = str[i + 1] - 32; 
		}
		i++;
	}
	return str;
}
