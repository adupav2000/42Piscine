
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

int  ft_str_is_lowercase(char *str)
{
    int i;
    int ret = 0;
    i = 1;
    if(!ft_strlen(str))
       ret = 1; 
    while(str[i] != 0)
    {
        if(str[i] < 97 && str[i] > 122)
            ret = 1;
        i++;
    }
    return (ret);
}