int     ft_count_unsigned_nb(unsigned int nb)
{
        int     size_unsigned_nb;

        size_unsigned_nb = 0;
        while (nb > 0)
        {
                nb = nb / 10;
                size_unsigned_nb++;
        }
        return (size_unsigned_nb);
}

int     ft_put_u_nbr(unsigned int nb)
{
        int     count;

        if (nb == 0)
                count = 1;
        else
                count = ft_count_u_nbr(nb);
        if (nb > 9)
                ft_put_u_nbr(nb / 10);
        nb = nb % 10 + '0';
        write(1, &nb, 1);
        return (count);
}

