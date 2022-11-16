int     ft_putstr(char *str)
{
        int     i;

        if (!str)
        {
                write(1, "(null)", 6);
                return (6);
        }
        i = 0;
        while (str[i])
        {
                write(1, &str[i], 1);
                i++;
        }
        return (i);
}

