
#include <string.h>
#include <stdio.h>

char    *ft_strcpy(char *dest,char *src);



int main(void){
	char *src;
	char *dest;
	char *dest1;

	src = "qwertyuiop";
	dest = ft_strcpy(dest, src);
	printf("%s\n", dest);
	dest1 = strcpy(dest1, src);
	printf("%s\n", dest1);
}


char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
    while (src[i])
    {
    	dest[i] = src[i];
    	i++;
    }
    dest[i] = src[i];
    return (dest);
}
