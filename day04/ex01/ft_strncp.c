


#include <stdio.h>
#include <string.h>
char *ft_strncpy(char *dest, char *src, unsigned int n);



int main(void){
	char *src;
	char *dest;
	char *dest1;

	dest = "";
	dest1 = "";
	src = "qwertyuiop";
	// dest = ft_strncpy(dest, src, 3);
	// printf("%s\n", dest);
	// dest1 = strncpy(dest1, src, 3);
	// printf("%s\n", dest1);
}


char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 1;
    while (i <= n)
    {
    	dest[i] = src[i];
    	i++;
    }
    dest[i] = src[i];
    return (dest);
}

