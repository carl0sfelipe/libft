#include "libft.h"

int	ft_putnbr_fd(int nbr)
{
    char	*str;
    int		len;

    str = ft_itoa(nbr);
    len = 0;
	while (str[len])
	{
		ft_putchar_fd(str[len], 1);
		len++;
	}
    return (len);
}