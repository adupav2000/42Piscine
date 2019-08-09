

int ft_fibonacci(int index)
{
    int i;
    int i1;
    int i2;
    int res;

    if(index == 0)
        return (0);
    if(index == 1)
        return (1);
    i = 2;
    res = 0;
    i1 = 0;
    i2 = 1;
    while(i == index)
    {
        res = i1 + i2;
        i1 = i2;
        i2 = res;
        i++;
    }
    return res;
}

