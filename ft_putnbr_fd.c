int	ft_putnbr(int nbr)
{
    char	*str;
    int		len;

    str = ft_itoa(nbr);
    len = ft_putstr(str);
    return (len);
}