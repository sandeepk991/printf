int     ft_count_nb(int nb)
{
        int     size_nb;

        size_nb = 0;
        if (nb <= 0)
        {
                nb = nb * -1;
                size_nb++;
        }
        while (nb > 0)
        {
                nb = nb / 10;
                size_nb++;
        }
        return (size_nb);
}

int     ft_put_nbr(int nb)
{
        int     count;

        count = ft_count_nb(nb);
        if (nb == -2147483648)
        {
                write(1, "-2147483648", 11);
                return (11);
        }
        if (nb < 0)
        {
                write(1, "-", 1);
                nb = nb * -1;
        }
        if (nb > 9)
                ft_put_nbr(nb / 10);
        nb = nb % 10 + '0';
        write(1, &nb, 1);
        return (count);
}

