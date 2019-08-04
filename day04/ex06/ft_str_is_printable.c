#include <unistd.h>
#include <stdio.h>

int ft_str_is_printable(char *str);
int ft_strlen(char *str);

int main()
{
    
    char x = ht;

    printf("%d\n", is_printable(x));

    return 0;
}



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


int ft_str_is_printable(char *str){
	int i;
    int ret = 0;
    
    i = -1;
    if(!ft_strlen(str))
       ret = 1; 
    while(str[++i])
    {
        if(is_printable(str[i]))
            ret = 1;
    }
    return (ret);
}
